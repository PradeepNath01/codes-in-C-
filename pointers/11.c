/* ******
****
***
**
* */
#include <stdio.h>

int main()
{
    int i, j;

    for (i = 5; i >= 1; i--)
    { // i controls number of stars in each row
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}
