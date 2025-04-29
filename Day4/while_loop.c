// write a program to print sum of digit after reading positive integer
#include <stdio.h>

int main()
{
    int number, sum = 0, digit;

    // Read a positive integer from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Make sure the number is positive
    if (number <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1; // exit the program
    }

    // Loop to extract and sum digits
    while (number != 0)
    {
        digit = number % 10;  // get the last digit
        sum += digit;         // add digit to sum
        number = number / 10; // remove the last digit
    }

    // Display result
    printf("Sum of digits = %d\n", sum);

    return 0;
}
