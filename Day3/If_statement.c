#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Simple if statement
    if (number > 0)
    {
        printf("The number is positive.\n");
    }

    if (number < 0)
    {
        printf("The number is negative.\n");
    }

    if (number == 0)
    {
        printf("The number is zero.\n");
    }

    return 0;
}
// This program checks if a number is positive, negative, or zero using simple if statements.
// It prompts the user to enter a number and then evaluates the number using if statements.
// Depending on the condition that is true, it prints the corresponding message to the console.
// The program uses the standard input/output library to handle user input and output.