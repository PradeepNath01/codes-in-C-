#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number != 0)
    {
        if (number > 0)
        {
            printf("The number is positive.\n");
        }
        else
        {
            printf("The number is negative.\n");
        }
    }
    else
    {
        printf("The number is zero.\n");
    }

    return 0;
}
// This program checks if a number is positive, negative, or zero using nested if statements.
// It prompts the user to enter a number and then evaluates the number using nested if statements.