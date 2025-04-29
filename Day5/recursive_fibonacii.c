#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int terms;

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci Series: ");
    for (int i = 0; i < terms; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
// In this example, the fibonacci function is defined recursively. It calculates the Fibonacci number for a given term n by calling itself with decremented values of n. The main function prompts the user for the number of terms and prints the Fibonacci series up to that number. This demonstrates how recursion can be used to generate sequences like the Fibonacci series.
// Note: The recursive Fibonacci function is not the most efficient way to calculate Fibonacci numbers, especially for larger values of n, due to its exponential time complexity. For larger values, an iterative approach or memoization would be more efficient.