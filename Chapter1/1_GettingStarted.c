/* The only was to learn a programming language is by writing programs in it.
The first program to write is a "Hello World" program.


# Compiling and Running C Code #

Compiling and running .c files is different across various OS. For UNIX systems
such as MacOS and Linux, running 'cc filename.c -o outname' from the terminal will
create a file named 'outname.out' and can be run using './outname.out'.

For Windows based systems, files can be run in the terminal using the compiler command
code, ex. gcc followed by the parameters. For example 'gcc myprogram.c -g myprogram.exe
and then it can be run using './myprogram.exe

A C program consists of functions and variables. A function contains statements that specify
the operations to be done, and variables store values used during the computation of the program
and varaibles store values used during the computation. Our example function is called 'main'.
Normally, you can name functions whatever, but 'main' is special - your program begins executing
at the beginning of main. That means every program must have a 'main' somewhere.

*/

#include <stdio.h> // This tells the compiler to include info about the std I/O library

int main () 
{
    printf("Hello World\n"); // \n is a newline escape character that brings the cursor to a newline

    return 0;
}

