/*A final observation before we journey off past temperatur conversion. It's bad to practice to bury 'magic numbers' like 300
and 20 in a program; they convey little information to someone who might have to read our code and they are hard to change in a
systematic way. One way to deal with magic numbers is to give them meaningful names. A #define line defines a symbolic name or constant
to be a paticular string of characters. These #define lines can be implemented like so:
*/

#include <stdio.h>

#define LOWER 0     // Lower limit of table
#define UPPER 300   // Upper limit of table
#define STEP  20    // Step size

int main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }
    return 0;
}

/* The quantities LOWER, UPPER, and STEP are symbolic constants, not variables, so they do not appear in declearations. Symbolic constant
names are conventioanlly written in uppercase so they can be readily distinguished from variable names. Notice that there is no semicolon after the end of a define Statemenmt
*/