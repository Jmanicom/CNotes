/* ======================================================== 
File Name: Exercise19.c
Author: Joshua Manicom
Date: October 30th, 2025
Version: 1.0

Brief Description: This program aims to reverse a character string s given as an input. It will reverse its input a line at a time
This problem is from the C Programming textbook by R&K.
===========================================================
*/

// Exercise 1-19. Write a function reverse(s) that reverses the character string s. Use it to
// write a program that reverses its input a line at a time.

#include <stdio.h>

#define MAXLINE 30                  // Define the maximum line length

int reverse(char s[]);              // Create a 'reverse' prototype

int main(void)
{
    char line[MAXLINE];             // Init a char array to contain the current line

    while (reverse(line) > 0) {     // If the returned length is greater than 0
        continue;                   // Continue to repeat the loop
    }
    printf("        END OF PROGRAM      \n");
    return 0;
}

int reverse(char s[])
{
    char rev[MAXLINE];              // Init the reverse char array
    int i, c, len;                  // Init the idx, character var, and the length variable
    
    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;                   // Basic 'getline()' function, 
    }
    len = i;                        // Save the length of the line
    s[i] = '\0';                    // Add a null char to end of string

    for (i = 0; i < len; i++) {
        rev[len - 1 - i] = s[i];    // Set the reverse str ending char as the first normal str char
    }
    rev[i] = '\0';                  // Add a null char to end of string

    printf("%s\n", rev);            // Print the reverse string
    return len;                     // Return the length of the string
}

//COMPLETE