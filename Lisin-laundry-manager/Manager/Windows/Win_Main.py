import sys

from PySide6.QtGui import *
from PySide6.QtCore import *
from PySide6.QtWidgets import *

from ..Windows import Ui_Main


class MainWindow(QMainWindow, Ui_Main.Ui_Form):
    # variables declaraction
    def __init__(self, parent=None):
        super(MainWindow, self).__init__(parent)
        print("app created")
        self.runSetting()

    def runSetting(self):
        self.setWindowState(Qt.WindowMaximized)

        # self.toRightPosi()

    # function declaraction
    # def toRightPosi(self):
