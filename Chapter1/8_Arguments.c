/* # ARGUMENTS - CALL BY VALUE #
In C, all function arguments are passed 'by value'. This means that the called function is given the values of its arguments in temporary
variables rather tahn the originals. This leads to some different properties than are seen with "call by reference" languages in which
the called routine has access to the original argument, not a local copy.

Call by value is an asset, however, not a liability. It usually leads to more compact programs with fewer extraneous variables, because
parameters can be treated as conveniently initilialized local variables in the called routine. For example, here is a verision of 'power()'
that makes use of this property
*/

#include <stdio.h>

int power(int base, int n)
{
    int p;

    for (p = 1; n > 0; --n) {
        p = p * base;
    }
    return p;
}

/* The parameter n is used as a temp variable, and is counted down until it becomes zero; there is no longer a need for the variable i.
Whatever is done to n inside 'power' has no effect on the argument that power was originally called with. When necessary, it is possible
to arrange for a function to modify a variable in a calling routine. The caller must provide the address of the variable to be set.
*/