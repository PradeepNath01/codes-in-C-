#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d = %d\n", num, factorial(num));

    return 0;
}
// In this example, the factorial function is defined recursively. It calls itself with a decremented value of n until it reaches the base case (0 or 1). The main function prompts the user for input and prints the factorial of the given number. This demonstrates how recursion can be used to solve problems in a more elegant way than iterative approaches.