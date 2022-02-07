from multidl.download_manager import DownloadManager, DownloadHandler
from multidl.constants import DownloadState, STATE_TRANSITIONS
from multidl.downloaders import SCHEMES
from multidl.exceptions import TransitionError

import os
import time
import sys

from tqdm import tqdm
from queue import Queue, Empty
from threading import Thread
from urllib.parse import urlparse

import src.ui.dl_ui as ui
from PyQt5 import QtCore, QtGui, QtWidgets


class MyDownloadManager(DownloadManager):
    def __init__(self, urls, output_directory, nb_workers, **options):
        super().__init__(urls, output_directory, nb_workers, **options)

    def process(self, progressBar):
        self.state = DownloadState.started

        try:
            watcher = Thread(target=self.watcher, args=(progressBar))
            watcher.start()

            for _ in range(self.nb_workers):
                t = Thread(target=self.worker, args=(progressBar))
                t.start()

            self._urls.join()
            watcher.join()
        except KeyboardInterrupt:
            self.cancel()

    def watcher(self, progressBar):

        while True:

            for download_handler in self._download_handlers:
                download_handler.update_progress()

            if not self._urls.unfinished_tasks:
                break
            time.sleep(1)

        self.state = DownloadState.finished
        tqdm.write('')

    def worker(self, progressBar):

        while True:
            state = self.state
            if state not in [DownloadState.paused, DownloadState.started]:
                break

            if state == DownloadState.paused:
                time.sleep(0.1)
                continue

            try:
                index, url = self._urls.get_nowait()
            except Empty:
                break

            downloader = self.process_single_url(url)
            if downloader:
                self._download_handlers[index].downloader = downloader
                downloader.start()
            self._urls.task_done()

    def process_single_url(self, url):

        try:
            downloader = self.get_downloader(url)
        except NotImplementedError as e:
            self.log('{}: skipping {}'.format(e, url))
            return None

        output = os.path.join(self.output_directory)
        download_process = downloader(url, output)
        return download_process


class Main(QtWidgets.QMainWindow, ui.Ui_MainWindow):
    boolClicked = 0  # 0:canceled, 1:download
    progressValue = 0  # TODO: maybe being delete if I find the progress value
    threads = 4

    def __init__(self):
        # base
        super().__init__()
        self.setupUi(self)

        # actions
        self.pushButton.clicked.connect(self.action)

    # function definitions
    def action(self):  # finished
        if self.boolClicked == 1:  # downloading and cancel
            self.boolClicked = 0
            self.pushButton.setText("Download")
        else:                 # stopped and download
            self.boolClicked = 1
            self.pushButton.setText("Cancel")
            self.download()
            self.pushButton.setText("Download")

    # TODO: PROGRESS BAR
    # TODO: YOU MAY COUNTER TO AN APP STUCK WHILE DOWNLOADING
    def download(self):
        urls = self.plainTextEdit.toPlainText().splitlines()
        for i in range(len(urls)):
            try:
                download_manager = DownloadManager(
                    [urls[i]], './', self.threads)
                download_manager.process()
                texts = ""

                if i <= len(urls)-2:
                    texts = urls[i+1]

                for j in range(i+2, len(urls)):
                    texts += "\n" + urls[j]

                self.plainTextEdit.setPlainText(texts)

            except self.boolClicked == 0:
                download_manager.cancel()


if __name__ == '__main__':
    import sys
    app = QtWidgets.QApplication(sys.argv)
    window = Main()
    window.show()
    sys.exit(app.exec_())
