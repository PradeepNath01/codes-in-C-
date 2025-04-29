#include <stdio.h>

int main()
{
    int i, j;

    printf("Integers arranged in 10 rows and 5 columns (vertical):\n");

    for (i = 1; i <= 10; i++) // Loop for rows
    {
        for (j = 0; j < 5; j++) // Loop for columns
        {
            printf("%3d ", i + j * 10); // Print the number in column-major order
        }
        printf("\n"); // Move to the next row after printing all columns
    }

    return 0;
}
