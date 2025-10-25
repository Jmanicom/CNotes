// Exercise 1-12. Write a program that prints its input one word per line

#include <stdio.h>

int main()
{
    int c, in_blank;
    in_blank =  0;

    while ((c = getchar()) != EOF) {
        if ((c != ' ') && (c != '\t') ) {
            putchar(c);
            in_blank = 0;
        }
        else if (!in_blank) {
            putchar('\n');
            in_blank = 1;
        }
    }
    return 0;
}

// COMPLETE