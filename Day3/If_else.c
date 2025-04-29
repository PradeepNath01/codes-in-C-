#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 0)
    {
        printf("The number is non-negative.\n");
    }
    else
    {
        printf("The number is negative.\n");
    }

    return 0;
}
    