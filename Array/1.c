// WAP to find average of elements entered by user
#include <stdio.h>

int main()
{
    int i, a[10], sum = 0;
    float avg;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    avg = sum / 10.0; // 10.0 to ensure float division
    printf("\nAverage = %.2f\n", avg);

    return 0;
}
