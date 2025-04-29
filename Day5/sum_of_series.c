//1!+2!+3!+4!+⋯+n!
#include <stdio.h>

    int main()
{
    int i, n, fact = 1, sum = 0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;  // Calculate factorial of i
        sum = sum + fact; // Add factorial to sum
    }

    printf("The sum of the series is: %d\n", sum);
    return 0;
}
