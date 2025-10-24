#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    printf("\nReceived EOF (Value: %d)\n", c);

    return 0;
}