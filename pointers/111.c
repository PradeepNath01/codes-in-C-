#include <stdio.h>

/*
 *
 **
 ***
 ****
 *****
 */

int main()
{
    int i, j;

    for (i = 0; i < 5; i++) // i controls the number of rows
    {
        for (j = 0; j <= i; j++) // j controls the number of stars in each row
        {
            printf("* ");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
