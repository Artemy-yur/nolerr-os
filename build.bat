@echo off
echo Building Ezy_OS project with GCC...

set SRCS=main.c^
 file/workfiles.c^
 additions/calculator/calculator.c^
 additions/timenow.c^
 additions/wearth/getWearth.c^
 interface/interface.c^
 additions/help/help.c^
 additions/infos.c^
 additions/notich/notich.c^
 language/locale_managere.c

set INCLUDES=-I. -Ilibraru

echo Compiling with GCC...
gcc %SRCS% %INCLUDES% -o Ezy_OS.exe -lws2_32 -Wall -Wextra -g

if %ERRORLEVEL% equ 0 (
    echo.
    REM ИСПРАВЛЕНО: копируем скрипт из папки additions/help в корень к .exe
    copy /Y "additions\help\help.py" "help.py" >nul

    echo --- Build successful! ---
    echo Executable created: Ezy_OS.exe
) else (
    echo.
    echo --- Build FAILED! ---
)
pause
