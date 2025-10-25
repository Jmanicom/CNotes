// Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1. 

#include <stdio.h>

int main()
{
    int c;
    c = getchar();

    if(getchar() == EOF) {
        printf("If getchar() is = to EOF, expression evaluates to: %d\n", (c != EOF));
    }
    else {
        printf("If getchar != to EOF, expressions evaluates to: %d\n", (c != EOF));
    }
}