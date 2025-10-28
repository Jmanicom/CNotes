/* ======================================================== 
File Name: Exercise09.c
Author: Joshua Manicom
Date: October 27th, 2025
Version: 1.0

Brief Description: This program copies it's input and filters out multiple blank spaces and limits them to a single 
blank space. This problem is from the C Programming textbook by R&K.
===========================================================
*/

//Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.

#include <stdio.h>

int main()
{
    int c, in_blank;
    in_blank = 0;

    while ((c = getchar()) != EOF) {
        if ((c != ' ') && (c != '\t')) {
            putchar(c);
            in_blank = 0;
        }
        else if (!in_blank) {
            putchar(c);
            in_blank = 1;
        }
    }
    return 0;
}

// COMPLETE