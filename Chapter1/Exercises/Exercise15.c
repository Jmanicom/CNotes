/* ======================================================== 
File Name: Exercise15.c
Author: Joshua Manicom
Date: October 28th, 2025
Version: 1.0

Brief Description: This program takes an earlier temp conversion program and makes it its own function.
This problem is from the C Programming textbook by R&K.
===========================================================
*/

// Exercise 1.15. Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float tempconvert(float fahr);

int main()
{
    printf("Farenheit  Celsius\n");
    for (int fahr = LOWER; fahr <= UPPER; fahr += STEP) {
        printf("%10d %7.1f\n", fahr, tempconvert(fahr));
    }
    return 0;
}

float tempconvert(float fahr)
{
    return (5.0/9.0) * (fahr - 32.0);
}

// COMPLETE