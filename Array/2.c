// WAP to find largest number of an array
#include <stdio.h>

int main()
{
    int arr[8], max, i;

    printf("Enter 8 elements:\n");
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (i = 1; i < 8; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    printf("Largest number = %d\n", max);

    return 0;
}
