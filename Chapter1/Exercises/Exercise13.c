// Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
// easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging

#include <stdio.h>

#define MAXWORD 10  // Max word length to track

int main()
{
    int c, in_blank, wlen;
    in_blank = wlen = 0;

    int len[MAXWORD + 1] = {0};

    while ((c = getchar()) != EOF) {
        if ((c != ' ') && (c != '\t') && (c != '\n')) {
            ++wlen;
        }
        else if(wlen > 0) {
            if (wlen > MAXWORD)
                wlen = MAXWORD;
            len[wlen]++;
            wlen = 0;
        }
        }
    for (int i = 1; i <= MAXWORD; i++) {
        if (len[i] > 0) {
            printf("%2d | ", i);
            for (int j = 0; j < len[i]; j++) {
                putchar('#');
            printf(" (%d)\n", len[i]);
            }
        }
    }
}