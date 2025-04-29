#include <stdio.h>

int main()
{
    int num, i, isPrime = 1; // Assume number is prime

    // Input a number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Handle numbers less than equal to 1
    if (num <= 1)
    {
        printf("%d is neither prime nor composite.\n", num);
        return 0;
    }

    // Check for factors from 2 to sqrt(num)
    for (i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            isPrime = 0; // Not prime
            break;
        }
    }

    // Output result
    if (isPrime)
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is a Composite number.\n", num);

    return 0;
}
