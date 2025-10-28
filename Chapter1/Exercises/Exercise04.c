/* ======================================================== 
File Name: Exercise04.c
Author: Joshua Manicom
Date: October 27th, 2025
Version: 1.0

Brief Description: This program converts temperatures in Celsius to Farenheit across a specified range.
This problem is from the C Programming textbook by R&K.
===========================================================
*/

// Exercise 1-4 : Write a program to print the corresponding Celsius to Fahrenheit table.

#include <stdio.h>

int main() 
{
    float fahr, celsius;
    int upper, lower, step;

    lower = 0;
    upper = 200;
    step = 20.0;

    celsius = lower;

    printf("%2s  |%4s\n", "C", "F");
    while (celsius <= upper) {
        fahr = celsius * (9.0/5.0) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}

// COMPLETE