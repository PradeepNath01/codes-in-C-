#include <stdio.h>

int main()
{
    char ch;
    char str[100];

    // Unformatted character input/output
    printf("Enter a character: ");
    ch = getchar(); // Takes single character input
    printf("You entered: ");
    putchar(ch); // Prints that character
    printf("\n");

    // Flush newline left in buffer (optional but helps)
    while ((getchar()) != '\n'); // clear input buffer

    // Unformatted string input/output
    printf("Enter a string: ");
    gets(str); // Takes string input (⚠️ Unsafe, use fgets in real programs)

    printf("You entered: ");
    puts(str); // Prints the string

    return 0;
}
// This program demonstrates the use of unformatted input and output functions in C.
// It uses getchar() and putchar() for character input/output, and gets() and puts() for string input/output.
// The program prompts the user to enter a character and a string, then displays the entered values.
// Note: gets() is unsafe and should be avoided in favor of fgets() for string input to prevent buffer overflow.
// The program is a simple demonstration of unformatted input/output in C programming.
// The unformatted input/output functions are useful for simple console applications where formatted input/output is not required.
// The program can be modified to include error handling or to work with different data types.