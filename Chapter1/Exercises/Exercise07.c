/* ======================================================== 
File Name: Exercise07.c
Author: Joshua Manicom
Date: October 27th, 2025
Version: 1.0

Brief Description: This program prints the value of the term 'EOF' if it is passed as an argument.
This problem is from the C Programming textbook by R&K.
===========================================================
*/

// Exercise 1-7. Write a program to print the value of EOF.
#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF) {  // Enter 'Ctrl + Z' for EOF
        putchar(c);
    }
    printf("\nReceived EOF (Value: %d)\n", c);

    return 0;
}

// COMPLETE