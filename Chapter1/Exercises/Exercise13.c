// Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
// easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging

#include <stdio.h>

#define MAXWORD 20  // Max word length to track

int main()
{
    int ch, wlen;
    wlen = 0;

    int length[MAXWORD + 1] = {0};

    while ((ch = getchar()) != EOF) {
        if ((ch != ' ') && (ch != '\t') && (ch != '\n')) {
            ++wlen;
        }
        else if(wlen > 0) {
            if (wlen > MAXWORD)
                wlen = MAXWORD;
            length[wlen]++;
            wlen = 0;
        }
        }
    for (int i = 1; i <= MAXWORD; i++) {
        printf("%2d | ", i);
        while (length[i] > 0) {
            putchar('#');
            --length[i];
        }
        if (length[i] == 0) {
            putchar('\n');
        }
    }
}

// COMPLETE

/* ======================================================== 
File Name: Exercise13.c
Author: Joshua Manicom
Date: October 27th, 2025
Version: 1.5

Brief Description: This program reads the command line and creates a histogram of the length from each word that was passed
as an input. This problem is from the C Programming textbook by R&K.
*/