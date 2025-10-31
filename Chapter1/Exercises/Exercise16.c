/* ======================================================== 
File Name: Exercise16.c
Author: Joshua Manicom
Date: October 30th, 2025
Version: 1.4

Brief Description: This program revises the main routine from the example is Section 1-9 so it will correctly print the
length of arbitrary long input lines, and as much as possible of the text.
This problem is from the C Programming textbook by R&K.
===========================================================
*/

// Exercise 1-16 - Revise the main routine of the longest-line program so it will correctly print the
// length of arbitrary long input lines, and as much as possible of the text

#include <stdio.h>

#define MAXLINE 30          // Maximum input length
#define SYS_LIMIT 1000

int getline(char str[]);    // Return the length of the line as an int
void copy(char to[], char from[]); // Copy a string to a new array from an exisiting one

int main()
{
    int len;                // Init a variable to keep track of current length
    int max = 0;            // Init a variable to keep track of longest length
    char line[SYS_LIMIT];   // Init a char array to keep track of current line
    char longest[SYS_LIMIT];// Init a char array to keep track of longest line
    char abbr[MAXLINE];     // Init a char array to abbreviate line length <= MAXLINE

    while ((len = getline(line)) > 1) {
        if (len > max) {
            max = len;
            if (len <= MAXLINE) {
                copy(longest, line);
            }
            else {
                int j = 0;
                while ((abbr[j] = line[j]) != '\0' && j < MAXLINE - 1)
                    ++j;
                abbr[j] = '\0';
                copy(longest, abbr);
            }   
        }
    }
    if (max > 0)
        printf("The longest line was %d characters long: %s", max, longest);
    return 0;
}

int getline(char str[])
{
    int c, i, l;               // Init a variable as a mask for the current character, and a index var

    for (i = 0; ((c = getchar()) != EOF) && (c != '\n'); ++i) {
        str[i] = c;         // If c is a character, add it to the str
    }
    l = i;
    str[i] = '\0';          // Add a trailing null character to the end of the str

    return l;               // Return line length
}

void copy(char to[], char from[])
{
    int i = 0;              // Init a index var

    while ((to[i] = from[i]) != '\0') {
        ++i;                // While character at [i] in str != null char, increment index
    }
}

//COMPLETE