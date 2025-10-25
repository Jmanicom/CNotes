//Exercise 1-5. Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0

#include <stdio.h>

int main() 
{
    int fahr;

    int upper, lower, step;
    
    upper = 300;
    lower =   0;
    step =   20;

    for (fahr = upper; fahr >= 0; fahr = fahr - step) {
        printf("%3d %6.1f\n", fahr, ((5.0/9.0) * (fahr - 32.0)));
    }
    return 0;
}

// COMPLETE