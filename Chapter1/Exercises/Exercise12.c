/* ======================================================== 
File Name: Exercise12.c
Author: Joshua Manicom
Date: October 27th, 2025
Version: 1.0

Brief Description: This program takes its input and prints it one word per line.
This problem is from the C Programming textbook by R&K.
===========================================================
*/

// Exercise 1-12. Write a program that prints its input one word per line

#include <stdio.h>

int main()
{
    int c, in_blank;
    in_blank =  0;

    while ((c = getchar()) != EOF) {
        if ((c != ' ') && (c != '\t') ) {
            putchar(c);
            in_blank = 0;
        }
        else if (!in_blank) {
            putchar('\n');
            in_blank = 1;
        }
    }
    return 0;
}

// COMPLETE