/* # Character Input and Output #
We are going to consider a family of related programs for processing character data. You will find that many programs are just expanded verisons of the prototypes
that will be discussed. The model of input and output suppourted by the std C Library is very simple. Text input or output, regardless of where it originates or where
it goes to, is dealt with as streams of characters. A text stream is a sequence of characters divide into lines; eacj line consists of zero or more characters followed
by a newline characters (\n).

The standard library provides several functions for reading or writing one character at a time, of which 'getchar' and 'putchar' are the simplest. Each time it is called,
'getchar' reads the next input character from a text stream and returns that as its value. That is, after:

    c = getchar();

The variable c contains the next character of input. The characters normally come form the keyboard.

The function 'putchar' prints a characters each time it is called:

    putchar(c);

prints the contents of the integer variable c as a character, usually on the screen. Calls to 'putchar' and 'printf' may be interleaved; the output will appear in order
in which the calls are made.

    # File Copying #
Given 'getchar' and 'putchar' you can write a surprising amount of useful code without knowing anything more about input or output. The simplest example is a program that
copies its input to its output one character at a time:
*/

#include <stdio.h>

int main()
{
    int c;              // Initialize a variable to take on the value of char's

    c = getchar();
    while (c != EOF) {  // If c doesn't equal to 'end of file',
        putchar(c);     // Put c in the terminal
        c = getchar();  // Set c to the next input char
    }
}

/* The type char is meant for storing bit patterns for character data, but any integer type can be used. We used 'int' for a subtle but important reason. The problem is
distinguishing the end of input from valid data. The solution is that 'getchar' returns a distinct value when there is no more input, a value that cannot be confused with
any real character. This is the 'EOF' is the while statement. We must declare 'c' to be a type big enough to hold any value that 'getchar' returns. We can't use 'char'
since 'c' must be big enough to hold 'EOF" in addition to any possible char. Therefore we use 'int'.

    # Character Counting #
The next program counts characters; it is similar to the copy program.
*/
int count()
{
    long nc;                // Create a long integer variable 'nc'
    
    nc = 0;                 // Set the current character count to zero
    while (getchar() != EOF) {
        ++nc;               // Increment the character count as long as getchar() != EOF
    printf("%ld\n", nc);    // Print the character count
    }
}

/* The statement '++nc' presents a new operator, '++', which means increment by one. You could also instead write nc = nc + 1, but the chosen version is more concise
and often more efficient.

    # Word Couting #
The final useful program to look at will count lines, words, and characters with loose definition that a word is any sequence of characters that does not contain a
blank, tab or newline. This is a bare-bones version of the UNIX program 'wc':
*/

#define IN 1  // Inisde a word
#define OUT 0 // Outside a word
int wc()
{
    int c, nl, nw, nc, state;           // Initialize all the variables to ints

    state = OUT;                        // Set the initial state as 'OUT'
    nl = nw = nc = 0;                   // Set all counts to 0
    while ((c = getchar()) != EOF) {    // While c != EOF,
        ++nc;                           // Increment the character count
    }
    if (c == '\n') {                    // If c is a newline character,
        ++nl;                           // Increment line count
    }
    if (c == ' ' || c == '\n' || c == '\t') { // If c is a space OR a newline OR a tab,
        state = OUT;                          // Set the State to OUT
    }
    else if (c == OUT) {                      // If above is false, AND c == OUT,
        state = IN;                           // Set the state to IN
        ++nw;                                 // Increment the word count
    }
}