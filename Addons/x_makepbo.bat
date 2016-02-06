@echo off

REM cleanup
DEL /S /Q *.pbo

"C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP NLDO_Common
"C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -U NLDO_RU_VDV_31