/*    # ARRAYS #
Let us write a program to count the number of occurences of each digit, of white space characters (blank, tab, newline), and all other characters.
This is artificial, but it permits us to illustrate several aspects of C in one program.

There are twelve categories of input, so it is convinient to use an array to hold the number of occurences of each digit, rather than then ind. variables.
Here is one version of the program
*/

#include <stdio.h>

int main()
{
    int c, i, nwhite, nother; // count digits, whitespace, and other
    int ndigit[10];           // Declares 'ndigit' to be an array of 10 integers

    nwhite = nother = 0;
    for (i = 0; i < 10; i++) {
        ndigit[i] = 0;        // Set all int's in the array to zero
    }
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9')   // Checks if c is a number between 0 and 9
            ++ndigit[c-'0'];        // If it is, increment the correspondings digits index (i.e if c = 1, increment ndigit[1]). ASCII for 0 is 48, each next num increments by 1
        else if (c == ' ' || c == '\n' || c == '\t') {  // Otherwise, if c is whitespace, increment nwhite
            ++nwhite;
        }
        else {                      // If all else fails, it is in the other category, increment nother
            ++nother;
        }
    }
    printf("digits =");             // Print Label for array digits
    for (i = 0; i < 10; ++i) {      // Begin array index at ndigit[0] and increment
        printf(" %d", ndigit[i]);   // Print the value of ndigit[i] (amount of time 'i' appeared)
    }
    printf(", white space = %d, other = %d\n", nwhite, nother);
    return 0;
}

/* The decleration:

    int ndigit[10];

declares 'ndigit' to be an array to 10 integers. Array subscripts always start at zero in C, so the elements are ndigit[0], ndigit[1], and so on. This is
reflected in the for loops where they begin at i = 0. A subscript can be any integer expression, either constants or integer variables, such as i.

This program relies on the properties of the character representation of digits. For example, the test

    if (c >= '0' && c <= '9')

determines wether the character in c is a digit. If it is, the numeric value of that digit is: (c - '0'). By definition, chars are just small integers, so char
variables are identical to ints in arithmetic operations. This is natural and convenient, for example (c -'0') is an integer between 0 and 9 corresponding to the
character '0' and '9' stored in 'c', and thus a valid subscript for the array 'ndigit'. This works because the ascii value of '0' is 48 and subsequent numbers just
increment by 1; so in the case of (c - '0') for c = 1, its actually (49 - 48) = 1, thus i = 1.
*/