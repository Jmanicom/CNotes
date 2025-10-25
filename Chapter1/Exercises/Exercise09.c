//Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.

#include <stdio.h>

int main()
{
    int c, in_blank;
    in_blank = 0;

    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
            in_blank = 0;
        }
        else if (!in_blank) {
            putchar(c);
            in_blank = 1;
        }
    }
    return 0;
}