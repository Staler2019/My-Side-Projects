from PyQt5 import QtCore, QtGui, QtWidgets
from datetime import date, datetime, timedelta
import os

import Timer_ui as ui

# self.textEdit_2.toPlainText() # get final directory
# self.textEdit_3.toPlainText() # get original directory


class Main(QtWidgets.QMainWindow, ui.Ui_MainWindow):
    def __init__(self):
        # inherits
        super().__init__()
        self.setupUi(self)

        # QTimer
        self.timer = QtCore.QTimer(self)  # 呼叫 QTimer
        self.timer.timeout.connect(self.runTimer)  # 當時間到時會執行 run

        # vars
        self.second = 0
        self.minute = 0
        self.hour = 0
        self.dataPath = './data'
        self.checkDirectory()
        self.readTimer()
        self.setLabelTimer()

        # ui_objects
        self.labelTimer.setAlignment(
            QtCore.Qt.AlignCenter)
        self.pushButton.clicked.connect(self.changeMode)

    # functions
    def checkDirectory(self):
        try:
            os.mkdir(self.dataPath)
        except FileExistsError:
            print('The directory has existed.')

    # change the mode to increase timer or not
    def changeMode(self):
        if self.pushButton.text() == 'Start':
            self.pushButton.setText('Pause')
            self.timer.start(1000)  # 啟動 Timer .. 每隔1000ms 會觸發 run
        else:
            self.timer.stop()
            self.writeInFile()
            self.pushButton.setText('Start')

    def runTimer(self):
        self.second += 1
        if self.second >= 60:
            self.second -= 60
            self.minute += 1
        if self.minute >= 60:
            self.minute -= 60
            self.hour += 1
        if datetime.now().strftime("%H:%M:%S") == '00:00:00':
            self.writeInFile()
            self.second = 0
            self.minute = 0
            self.hour = 0
        self.setLabelTimer(tDelta=1)

    def setLabelTimer(self):
        self.labelTimer.setText(str(self.hour) + ' h: ' +
                                str(self.minute) + ' m: ' + str(self.second) + ' s')

    def readTimer(self):
        try:
            f = open('./data/'+str(date.today())+'.txt', 'r')
        except OSError:
            return
        with f:
            data = f.readline()
            if data == '':
                f.close()
                return
            timeStr = data.split(': ')
            time = list()
            for i in timeStr:
                i = i[:-2]
                time.append(int(i))
            self.hour = time[0]
            self.minute = time[1]
            self.second = time[2]
            f.close()

    def writeInFile(self, tDelta=0):
        f = open('./data/'+str(date.today()-timedelta(days=tDelta))+'.txt', 'w')
        data = str(self.hour)+' h: ' + str(self.minute) + \
            ' m: ' + str(self.second) + ' s'
        f.write(data)
        f.close()


if __name__ == '__main__':
    import sys
    app = QtWidgets.QApplication(sys.argv)
    window = Main()
    window.show()
    sys.exit(app.exec_())
