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

#define MAXLINE 30  // Maximum input length

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len;                // Current line length
    int max;                // Maximum length seen so far
    char line[MAXLINE];     // Current input line
    char longest[MAXLINE];  // Longest line saved here

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > max)
            max = len;
            copy(longest, line);
    }
    if (max > 0)
        printf("%s", longest);
    return 0;
}

int getline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && ((c = getchar()) != EOF) && (c!= '\n'); ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i = 0;

    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}