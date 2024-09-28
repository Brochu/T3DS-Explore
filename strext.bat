@echo off
cl -nologo strext.c -link -out:ext.exe

del *.obj
