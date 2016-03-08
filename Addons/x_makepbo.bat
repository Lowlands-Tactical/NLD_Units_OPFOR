@echo off

REM cleanup
DEL /S /Q *.pbo

"C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP SP_Pack
"C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP NLDO_Common
"C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP NLDO_RU_VDV_31
"C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP NLDO_RU_VDV_76
"C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -U NLDO_UA_UAF_BG
"C:\Program Files (x86)\Mikero\DePboTools\bin\MakePbo.exe" -UP NLDO_UA_UAF_95
