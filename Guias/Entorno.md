# INSTALAR ENTORNO DE COMPILACIÓN  

## INSTALAR COMPILADOR
- Instalar [MinGW-64](https://sourceforge.net/projects/mingw-w64/) en C:\MinGW  
- De la lista de opciones a instalar, asegurarse de que gcc y g++ (64 bits) están seleccionados para instalar.  
- Agregar al PATH la carpeta C:\MinGW\bin  
- [Guía externa](https://parzibyte.me/blog/2018/09/27/instalar-gcc-64-bits-en-windows-con-mingw/)

----
## INSTALAR ENTORNO DE DESARROLLO  
- Instalar [Visual Studio Code](https://code.visualstudio.com/download)  
- Instalar las extensiones para C/C++ (C/C++, Better C++ Syntax)  
- Para cada proyecto, usar los workspaces de ejemplo (carpetas de ejercicios que comienzan en "00")  

----  
## COMPILAR Y EJECUTAR UN PROGRAMA  
- Si es necesario, modificar el archivo ".vscode/tasks.json" del workspace para incluir los archivos deseados para la compilación  
- _Ctrl+Shift+P -> Tasks: Run task -> c build_ para compilar código C  
- _Ctrl+Shift+P -> Tasks: Run task -> c run_ para ejecutar código C  
- _Ctrl+Shift+P -> Tasks: Run task -> c++ build_ para compilar código C++  
- _Ctrl+Shift+P -> Tasks: Run task -> c++ run_ para ejecutar código C++  