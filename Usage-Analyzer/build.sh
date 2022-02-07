# !/bin/bash
pyuic5 -x timer.ui -o Timer_ui.py
pyinstaller --onefile --name StudyHelper -w Timer_main.py