#include <stdio.h>

int main()
{
    int a, b, max;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Using conditional (ternary) operator
    max = (a > b) ? a : b;

    printf("The greater number is: %d\n", max);

    // Another example: check even or odd
    (a % 2 == 0) ? printf("%d is even\n", a) : printf("%d is odd\n", a);

    return 0;
}
// This program demonstrates the use of conditional (ternary) operators in C.
// It takes two numbers as input and determines the greater one using the conditional operator.
// It also checks if the first number is even or odd using the same operator.
// The conditional operator is a shorthand for the if-else statement, making the code more concise.
// The syntax is: condition ? expression_if_true : expression_if_false;
// The program uses the conditional operator to assign the maximum of two numbers to the variable 'max'.
// It also uses it to print whether the first number is even or odd.
// The program is simple and effective for demonstrating the use of conditional operators in C.
// The output will show the greater number and whether the first number is even or odd based on the user's input.
// The program is easy to understand and can be modified for different conditions or additional functionality.
// The use of the conditional operator makes the code more readable and reduces the number of lines needed for simple conditions.
// The program is a good example of how to use conditional operators in C programming.
// The conditional operator is a powerful tool in C that allows for concise conditional expressions.
// It can be used in various scenarios, such as assigning values based on conditions or performing simple checks.