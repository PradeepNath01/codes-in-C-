#include <stdio.h>
#include <math.h>

int is_armstrong(int num)
{
    int sum = 0, temp, remainder, n = 0;

    // Copy the number to temp
    temp = num;

    // Calculate the number of digits
    while (temp != 0)
    {
        temp /= 10;
        ++n;
    }

    temp = num;

    // Calculate the sum of powers of digits
    while (temp != 0)
    {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }

    // If sum equals the number, it is an Armstrong number
    return sum == num;
}

int main()
{
    printf("Armstrong numbers less than 2000 are:\n");

    // Loop to check Armstrong numbers less than 2000
    for (int i = 0; i < 2000; i++)
    {
        if (is_armstrong(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n"); // To move to the next line after printing Armstrong numbers

    return 0;
}