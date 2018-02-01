@echo off
:compile
cls
echo compiling LangunizReplectus ...
g++ main.cpp -o lr_chatbot
echo done.
pause >NUL
goto compile