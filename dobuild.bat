REM %1 - DDK location
REM %2 - Build base directory
REM %3 - Release or debug build - fre|chk
REM %4 - Build architecture - x86|x64

call %1\bin\setenv.bat %1 %3 WLH %4

cd /d %2

IF NOT EXIST tmp GOTO SKIP_REMOVE 
rmdir /s/q tmp 
:SKIP_REMOVE 

mkdir tmp
set tmp=%2\tmp
set temp=%2\tmp

set USERNAME=OpenXT

build -bcezgw

