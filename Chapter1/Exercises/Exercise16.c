/* ======================================================== 
File Name: Exercise16.c
Author: Joshua Manicom
Date: October 28th, 2025
Version: 1.0

Brief Description: This program revises the main routine from the example is Section 1-9 so it will correctly print the
length of arbitrary long input lines, and as much as possible of the text.
This problem is from the C Programming textbook by R&K.
===========================================================
*/

// Exercise 1-16 - Revise the main routine of the longest-line program so it will correctly print the
// length of arbitrary long input lines, and as much as possible of the text

#include <stdio.h>

#define MAXLINE 30          // Maximum input length

int getline(char str[]);    // Return the length of the line as an int
void copy(char to[], char from[]); // Copy a string to a new array from an exisiting one

int main()
{
    int len;                // Init a variable to keep track of current length
    int max = 0;            // Init a variable to keep track of longest length
    char line[MAXLINE];     // Init a char array to keep track of current line
    char longest[MAXLINE];  // Init a char array to keep track of longest line

    while ((len = getline(line)) > 1) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
}

int getline(char str[])
{
    int c, i;               // Init a variable as a mask for the current character, and a index var

    for (i = 0; ((c = getchar()) != EOF) && (c != '\n'); ++i) {
        str[i] = c;         // If c is a character, add it to the str
    }
    if (c = '\n') {     
        str[i] = c;         // If c is a newline, add it to the str 
        ++i;                // Increment i
    }
    str[i] = '\0';          // Add a trailing null character to the end of the str

    return i;               // Return line length
}

void copy(char to[], char from[])
{
    int i = 0;              // Init a index var

    while ((to[i] = from[i]) != '\0') {
        ++i;                // While character at [i] in str != null char, increment index
    }
}

//INCOMPLETE