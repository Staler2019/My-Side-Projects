from PyQt5 import QtCore, QtGui, QtWidgets
import shutil

import McServer_ui as ui

# self.textEdit_2.toPlainText() # get final directory
# self.textEdit_3.toPlainText() # get original directory


class Main(QtWidgets.QMainWindow, ui.Ui_MainWindow):
    def __init__(self):
        super().__init__()
        self.setupUi(self)

        # functions
        self.pushButton.clicked.connect(self.browseDirectory)
        self.pushButton_2.clicked.connect(self.browseCopyDirectory)
        self.pushButton_3.clicked.connect(self.generate)
        # end of functions

    def browseDirectory(self):
        folder = str(QtWidgets.QFileDialog.getExistingDirectory(
            self, "Select Directory"))
        self.textEdit_2.setPlainText(folder)

    def browseCopyDirectory(self):
        folderCopy = str(QtWidgets.QFileDialog.getExistingDirectory(
            self, "Select Directory"))
        self.textEdit_3.setPlainText(folderCopy)

    def generate(self):
        if self.checkBox.isChecked():
            self.bannedIpsChecked()
        if self.checkBox_3.isChecked():
            self.bannedPlayersChecked()
        if self.checkBox_2.isChecked():
            self.opsChecked()
        if self.checkBox_4.isChecked():
            self.serverDotPropertiesChecked()
        if self.checkBox_5.isChecked():
            self.whitelistChecked()
        if self.checkBox_6.isChecked():
            self.worldFolderChecked()

        # must do
        # TODO:download jar using 爬蟲
        shutil.copyfile("./resources/eula.txt", self.textEdit_2.toPlainText() +
                        "/eula.txt")
        shutil.copyfile("./resources/start.bat", self.textEdit_2.toPlainText() +
                        "/start.bat")

    # def serverChecker(): # TODO: implement

    # def serverDownloader(): # TODO: implement

    def bannedIpsChecked(self):  # TODO: CATCH
        shutil.copyfile(self.textEdit_3.toPlainText() +
                        "/banned-ips.json", self.textEdit_2.toPlainText() +
                        "/banned-ips.json")

    def bannedPlayersChecked(self):  # TODO: CATCH
        shutil.copyfile(self.textEdit_3.toPlainText() +
                        "/banned-plays.json", self.textEdit_2.toPlainText() +
                        "/banned-plays.json")

    def opsChecked(self):  # TODO: CATCH
        shutil.copyfile(self.textEdit_3.toPlainText() +
                        "/ops.json", self.textEdit_2.toPlainText() +
                        "/ops.json")

    def serverDotPropertiesChecked(self):  # TODO: CATCH
        shutil.copyfile(self.textEdit_3.toPlainText() +
                        "/server.properties", self.textEdit_2.toPlainText() +
                        "/server.properties")

    def whitelistChecked(self):  # TODO: CATCH
        shutil.copyfile(self.textEdit_3.toPlainText() +
                        "/whitelist.json", self.textEdit_2.toPlainText() +
                        "/whitelist.json")

    def worldFolderChecked(self):  # TODO: CATCH
        src = self.textEdit_3.toPlainText() + "/world"
        dst = self.textEdit_2.toPlainText() + "/world"
        shutil.copytree(src, dst)

if __name__ == '__main__':
    import sys
    app = QtWidgets.QApplication(sys.argv)
    window = Main()
    window.show()
    sys.exit(app.exec_())
