@echo off
REM Configuração do ambiente para o projeto

REM Defina o caminho para o Raylib
SET RAYLIB_PATH=C:\raylib\raylib

REM Defina o caminho para o compilador GCC
SET COMPILER_PATH=C:\raylib\w64devkit\bin

REM Adicione o caminho do compilador ao PATH
SET PATH=%COMPILER_PATH%;%PATH%

REM Configuração do compilador e flags
SET CC=gcc
SET CFLAGS=-s -static -Os -std=c11 -Wall -I%RAYLIB_PATH%\src -Iinclude -DPLATFORM_DESKTOP
SET LDFLAGS=-lraylib -lopengl32 -lgdi32 -lwinmm

REM Navegue até o diretório do projeto
cd /d %~dp0

REM Comando de compilação
echo Compilando o projeto...
%CC% %CFLAGS% -o main.exe src/main.c src/gameManager.c src/menu.c src/ui.c %LDFLAGS%

REM Mensagem de conclusão
echo Projeto compilado com sucesso!
pause
