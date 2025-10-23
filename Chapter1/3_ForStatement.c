//There are plenty of ways to write a program for a paticular task. For example, we can make another variation of our temperature converter.

#include <stdio.h>

int main()
{
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
        printf("%3d %6.1f\n", fahr , (5.0/9.0 * (fahr -32.0)));
    }
    return 0;
}

/* This produces the same result as our previous program, but it certanitly looks different. We have managed to eliminate most of the
variables leaving us with only 'fahr' to manage and we have made it an int. The 'for' statement is a loop, a generalization of 'while'.

Within the colons are three parts seperated by semi colons. The first part is initialization as is completed once before the loop is started.
The second part is the test or condition we must satisfy in order to continue the loop (the condition must be true). Finally, we have the step part,
it is executed and then the variable is re-evaluated before the loop continues onto the next iteration.

The choice for 'for' or 'while' is arbitrary, and is based on what seems clearer. The 'for' is usually appropriate for loops in which initialization and increment
are single statements and logically related, since it is more compact than 'while' loops and it keeps the loop control statements in one place.
*/