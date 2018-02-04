@echo off
:compile
cls
echo compiling LangunizReplectus ...
g++ src/*.cpp -o lr_chatbot
echo done.
pause >NUL
goto compile