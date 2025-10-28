/* ======================================================== 
File Name: Exercise13.c
Author: Joshua Manicom
Date: October 27th, 2025
Version: 1.5

Brief Description: This program reads the command line and creates a histogram of the length from each word that was passed
as an input. This problem is from the C Programming textbook by R&K.
===========================================================
*/

// Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
// easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging

#include <stdio.h>

#define MAXWORD 10  // Max word length to track

int main(void)
{
    int ch, wlen;   // Create an int for the input character, and the word length
    wlen = 0;

    int length[MAXWORD + 1] = {0};                          // Create an array to keep track of word length, and make all entries zero

    while ((ch = getchar()) != EOF) {
        if ((ch != ' ') && (ch != '\t') && (ch != '\n')) {  // If ch is a character,
            ++wlen;                                         // Increase the length of the word length variable
        }
        else if(wlen > 0) {                                 // If ch is a blankspace, and word length is greater than zero,
            if (wlen > MAXWORD)                             // Further, if word length is greater than MAX LENGTH,
                wlen = MAXWORD;                                 // Set word length to MAX LENGTH
            length[wlen]++;                                 // Increment the index of the array given by the words length
            wlen = 0;                                       // Then set word length to zero to start for next word
        }
        }
    for (int i = 1; i <= MAXWORD; i++) {                    // Start at word length 1, then increment until MAX LENGTH,
        printf("%2d | ", i);                                // Print the length num we're on
        while (length[i] > 0) {                             // While the length index we're on is greater than zero,
            putchar('#');                                   // Put a '#' in the line
            --length[i];                                    // Then decrement said length index
        }
        if (length[i] == 0) {                               // If length index is at zero,
            putchar('\n');                                  // Move to next line, and next length index
        }
    }
    return 0;
}

// COMPLETE