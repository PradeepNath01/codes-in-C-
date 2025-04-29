#include <stdio.h>

int factorial(int n)
{
    static int callCount = 0; // Static variable to count calls
    callCount++;
    printf("factorial() called %d time(s)\n", callCount);

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = factorial(num);
    printf("Factorial of %d = %d\n", num, result);

    // Let's call it again to show static effect
    result = factorial(4);
    printf("Factorial of 4 = %d\n", result);

    return 0;
}
