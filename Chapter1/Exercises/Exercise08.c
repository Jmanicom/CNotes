/* ======================================================== 
File Name: Exercise08.c
Author: Joshua Manicom
Date: October 27th, 2025
Version: 1.0

Brief Description: This program counts blanks, tabs, and newlines and displays the total tally at the end.
This problem is from the C Programming textbook by R&K.
===========================================================
*/

// Exercise 1-8. Write a program to count blanks, tabs, and newlines.

# include <stdio.h>

int main()
{
    int c, nb, nt, nl;
    c = nb = nt = nl = 0;

    while ((c = getchar()) != EOF) {  // c takes on the ASCII value of whatever character it is currently working on
        if (c == ' ') {
            ++nb;
        } 
        else if (c == '\t') {
            ++nt;
        }
        else if (c == '\n') {
            ++nl;
        }
    }
    printf("Blanks: %d, Tabs: %d, Newlines: %d\n", nb, nt, nl);
    return 0;
}

// COMPLETE