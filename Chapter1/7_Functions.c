/*  # FUNCTIONS #
A function provides a convenient way to encapsulate some computation, which can then be used without worrying about its implementation.
With properly designed functions, it is possible to ignore how a job is done; knowing what is done is sufficient. C makes the use of functions easy,
convinient and efficient; you will often see a short function defined and called only once, just because it clarifies some piece of code.

So far we have used ony functions like 'printf()', 'getchar()', and 'putchar()' that have been provided for us; now it's time to write a 
few of our own. To illustrate the mechanics of making a function in C lets make a function to exponentiate named power(m, n). Where we raise
an integer m to a positive power n.

Functions other than main can be below it, if they are, they need a function 'prototype' above main to tell the compiler about
the functions signature before it is used. Otherwise, but it above main.

Function Prototype: int power(int m, int n);
*/

#include <stdio.h>

int power(int base, int n)
{
    int p;              // Initialize a product variable

    p = 1;              // Set the product variable to 1
    for (int i = 1; i <= n; ++i) {
        p = p * base;   // Set the product variable to itself * the chosen base
                        // Iteration 1: p = base
                        // Iteration 2: p = base * base, and so on
    }                   
                        // If n = 0, for loop doesn't run, so p = 1 which works given how exponentiation works with n = 0.
    return p;
}

int main()
{
    for (int i = 0; i < 10; ++i) {
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    }
    return 0;
}

/* A function definition has the form of:

retrun-type function-name(parameter declerations, if any)
{
    decleartions
    statements
}

The function 'power' is called twice by main. Each call passes two arguments to power, which each time returns an integer to be
formatted and printed. In an expression power(2, i) is an integer just as 2 and i are. (Not all functions produce integers).

The first line of power itself declares the parameter types and names, and the type of the result that the function returns.
The names used by power for its parameter are local to 'power' and are not visible to any other fucntion. Other routines can use
the same name without conflicts. The value that 'power' produces is returned to 'main' by the return statement.
*/