/* ======================================================== 
File Name: Exercise06.c
Author: Joshua Manicom
Date: October 27th, 2025
Version: 1.0

Brief Description: This exercise is a test to evaluate what the below expression comes out to.
This problem is from the C Programming textbook by R&K.
===========================================================
*/

// Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1. 

#include <stdio.h>

int main()
{
    int c;
    c = getchar();

    if(getchar() == EOF) {
        printf("If getchar() is = to EOF, expression evaluates to: %d\n", (c != EOF));
    }
    else {
        printf("If getchar != to EOF, expressions evaluates to: %d\n", (c != EOF));
    }
}

// COMPLETE