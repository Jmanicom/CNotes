/* The next program to go over uses the following formula to print the following table
of Farenheit temperatures and their centigrade or Celsius equivalent

    C = (5/9)(F-32)

The program itself is not complicated but introduces several new concepts, namely:
declerations, variables, arithmetic expressions, loops and formatted output. Reminder,
individual statements in C must end with a semicolon

*/

#include <stdio.h>

int main()
{
    
    int fahr, celsius;       // Initialize the variables for the two temps
    int lower, upper, step;  // Initialize the variables for the bounds + step

    lower = 0;     // lower limit of temp scale
    upper = 300;   // upper limit of temp scale
    step = 20;     // step size from lower to upper

    fahr = lower;                           // Set the 'fahr' variable to the lower bound
    while (fahr <= upper) {                 // Run repeatedly while fahr <= upper (Runs while True)
        celsius = 5 * (fahr -32) /9;        // Use the formula to calculate the celsius temp
        printf("%d\t%d\n", fahr, celsius);  // Print the temps formatted like a table using \t and \n
        fahr = fahr + step;                 // Increase 'fahr' to the a new value using 'step'
    }
}

/*
In C, all variables must be declared before they are used, alternatively, this can be
done in one line using:

    int foo = 5;

This not only declares the variable, but also assigns its value in the same line.
A decleration announces the properties of variables, it consists of a name a list of variables, such as

    int fahr, celsius;
    int lower, upper, step;

The type 'int' means that the variables listed are variabes; by contrast with 'float', which means floating
point, i.e numbers that may have a fractional part. The range of both int and float depend on the machine you
are using, C provides serveral other data types besides 'int' and 'float', including:

    char   - Character (a single byte)
    short  - a short integer
    long   - a long integer
    double - double-precision floating point

The Reason for multipplying and dividing the way we do is beacuse integer division truncates, any fractional
part is discarded. Thus, if we divided first, we would end up with all 0's, so we complete division last.

# Problems with the Program and Their Solutions #

There are a couple of issues with this program. The simpler one is formatting the text output, by right-justifying it.
This can be done by the way of incoperating a width into the '%d' format strings. This would look like:

    printf("%3d %6d\n", fahr, celsius);

The more serious problem is our math, we have used integer arithmetic but we are losing out on accruacy by not
accounting for the decimal parts of each value. To fix this, we should use floating point arithmetic.
This requires some changes, here is the second rendition of the program:
*/

int main2()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.0f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}