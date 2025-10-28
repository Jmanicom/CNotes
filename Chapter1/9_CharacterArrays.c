/* # CHARACTER ARRAYS #
The most common type of array in C is the array of characters. To illustrate the use of characters arrays and functions to manipulate them,
let's write a program that reads a set of text lines and prints the longest. The outline is simple enough:

    while (there's another line)
        if (it's longer than the previous longest)
            (save it)
            (save its length)
    print longest line

The outline makes it clear that the program divided naturally into pieces. One piece gets a new line, another saves it, and the rest
controls the process.

Since things divide so nicely, it would be well to write them that way too. Accordingly, let us first write a seperate function
'getline()' to fetch the next line of input. At the minimum, 'getline' has to return a signal about possible end of file; a more
useful design would be to return the length of the line, or zero if end of file is encountered. Zero is an acceptable end-of-file
return because a line can never be of zero length.

Finally, when we find a line that is longer than the previous longest line, we must save it somewhere. This suggests a second function,
'copy', to copy the new line to a safe place.
*/

#include <stdio.h>

#define MAXLINE 1000  // Maximum input length

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len;                // Current line length
    int max;                // Maximum length seen so far
    char line[MAXLINE];     // Current input line
    char longest[MAXLINE];  // Longest line saved here

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > max)
            max = len;
            copy(longest, line);
    }
    if (max > 0)
        printf("%s", longest);
    return 0;
}

int getline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && ((c = getchar()) != EOF) && (c!= '\n'); ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i = 0;

    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}

/*
The functions 'getline' and 'copy' are declared at the beginning of the program, which we assume is contained in one file. 'main' and
'getline' communicate through a pair of arguments and returned values. The first argument of which is an array and the second is our
integer limit.

'getline' puts the character '\0' (the null character whose value is zero) at the end of the array it is creating, to mark the end of
a string. This conversion is also used by the C language: when a string constant like

    "hello\n"

appears in a program, it is stored as an array of characters containing the characters in the string terminated with a '\0' to mark
the end. The %s format specifier in printf expects the corresponding argument to be a string represented in this form. 'copy' also
relies on the fact that its input argument is terminated with a '\0', and copies this character into the output.
*/