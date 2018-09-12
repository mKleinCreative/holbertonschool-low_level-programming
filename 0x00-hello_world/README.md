##0-preprocessor
a script that runs a C file through the preprocessor and saves the result into another file.
##1-compiler
a script that combiles a C file, but doesn't link it.
the C file name will be saved in a variable $CFILE
and will save it with the extension of .o instead of .c
##2-assembler
a script that generates the assembly code of a C code and saves it in an output file.
the C file name will be save in the variable $CFILE
and the output file will be named the same as the C file, but with an extension of .s instead of .c
##3-name
a scripte taht compiles a C file and creates an executable named cisfun.
the C file name will be saved in the variable $CFILE
##4-puts.c
a C program that prints exactly
"Programming is like building a multilingual puzzle", followed by a new line.
use of the puts function is mandatory.
use of the printf function not allowed, program should end with the value of 0.
##5-printf.c
A C program that prints exactly "with proper grammar, but the outcome is a piece of art," followed by a new line
this is to encourage the use of the printf function no use of the puts function. and the program should compile without warning when using gcc -Wall
##6-size.c
A C program that prints the size of various types on the computer it is compiled and run on.
it should produce the exact same output as in the example, 

julien@ubuntu:~/c/0x00$ gcc 6-size.c -m32 -o size32 2> /tmp/32
julien@ubuntu:~/c/0x00$ gcc 6-size.c -m64 -o size64 2> /tmp/64

