import sys

from PySide6.QtGui import *
from PySide6.QtCore import *
from PySide6.QtWidgets import *

# from .database.crypto.crypto import encrypt, decrypt
from .Windows.Win_Main import MainWindow
from .Database import Load


class App:
    def __init__(self):
        self.app = QApplication(sys.argv)  # 忘記為什麼，但這一行沒有錯
        self.runAppSetting()

    def runAppSetting(self):
        self.app.setApplicationName("麗新洗衣店")
        self.app.setStyle("Fusion")
        self.data = Load.loadSetting()

    def start(self):
        """
        control wins here using .show() to show up contents
        """
        print("main win starting...")
        self.mainWin = MainWindow()
        self.mainWin.show()

    def end(self):
        print("app ending...")
        sys.exit(self.app.exec())
