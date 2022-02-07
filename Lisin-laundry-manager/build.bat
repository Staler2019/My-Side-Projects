@REM cmd

set debug=build
set main=Manager
set data=Data

if exist .\%debug%\ rmdir /s/q .\%debug%\
md .\%debug%\

xcopy .\%main%\ .\%debug%\%main%\ /s/y
xcopy .\%data%\ .\%debug%\%data%\ /s/y
copy .\Laundry.py .\%debug%\