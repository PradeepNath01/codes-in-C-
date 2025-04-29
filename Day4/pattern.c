/*#include <stdio.h>

int main()
{
    int n = 5; // Number of rows

    for (int i = 1; i <= n; i++)
    {
        // Print the increasing part
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        // Print the decreasing part
        for (int j = i - 1; j >= 1; j--)
        {
            printf("%d ", j);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
} */
#include <stdio.h>

void main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++)
    {
        k = 1;
        for (j = 1; j <= 7; j++)
        {
            if (j >= (5 - i) && j <= (3 + i))
            {
                printf("%d ", k);
                if (j < 4)
                {
                    k++;
                }
                else
                {
                    k--;
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    getch();
}