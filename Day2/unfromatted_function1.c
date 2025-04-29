#include <stdio.h>
#include <conio.h> // Needed for getch(), getche(), putch()

int main()
{
    char ch1, ch2, ch3;
    char str[100];

    // getchar() - reads one character and putchar() prints it
    printf("Enter a character using getchar(): ");
    ch1 = getchar();
    printf("You entered using putchar(): ");
    putchar(ch1);
    printf("\n");

    // getch() - reads one character without echo
    printf("Enter a character using getch(): ");
    ch2 = getch();
    printf("\nYou entered (getch): ");
    putch(ch2); // prints a character

    // getche() - reads one character with echo
    printf("\nEnter a character using getche(): ");
    ch3 = getche(); // it echoes automatically
    printf("\nYou entered (getche): ");
    putch(ch3);

    // gets() - reads a string
    printf("\nEnter a string using gets(): ");
    fflush(stdin); // clear input buffer
    gets(str);     // ⚠️ Unsafe in modern compilers

    // puts() - prints the string
    printf("You entered using puts(): ");
    puts(str);

    return 0;
}
// // This program demonstrates the use of unformatted input and output functions in C.
// // It uses getchar() and putchar() for character input/output, and gets() and puts() for string input/output.
// // The program prompts the user to enter a character and a string, then displays the entered values.
// // Note: gets() is unsafe and should be avoided in favor of fgets() for string input to prevent buffer overflow.
// // The program is a simple demonstration of unformatted input/output in C programming.
// // The unformatted input/output functions are useful for simple console applications where formatted input/output is not required.
// // The program can be modified to include error handling or to work with different data types.
// // The program is a good example of how to use unformatted input/output functions in C programming.
