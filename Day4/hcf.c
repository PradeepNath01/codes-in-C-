#include <stdio.h>

int main()
{
    int num1, num2, i, hcf;

    // Input two numbers
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Find HCF using a loop
    for (i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i; // update HCF
        }
    }

    printf("HCF of %d and %d is %d\n", num1, num2, hcf);

    return 0;
}
