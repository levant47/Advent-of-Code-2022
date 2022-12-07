@echo off

REM compiler options:
REM /Fe specifies output name
REM /Gy collapse identical functions, https://stackoverflow.com/a/629978
REM /GS- disable buffer security checks
REM /Zl ignore CRT when compiling object files
REM linker options:
REM /NODEFAULTLIB ignore CRT when linking
REM /ENTRY:main override default entry point which is CRT's main

cl ^
    /Fe.\%1.exe ^
    /Gy /GS- /Zl ^
    %1.cpp ^
    /link /NODEFAULTLIB /ENTRY:main /SUBSYSTEM:console ^
    kernel32.lib ^
    || exit /b
del %1.obj
%1
del %1.exe
