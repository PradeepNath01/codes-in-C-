// matrix addition

#include <stdio.h>

int main()
{
    int i, j;
    int A[10][10], B[10][10], C[10][10];
    int r1, r2, c1, c2;

    printf("Enter size of rows and columns of matrix A: ");
    scanf("%d%d", &r1, &c1);

    printf("Size of matrix B:\n");
    scanf("%d%d", &r2, &c2);

    if (r1 == r2 && c1 == c2)
    {
        printf("Enter elements of matrix A:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &A[i][j]);
            }
        }

        printf("Enter elements of matrix B:\n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &B[i][j]);
            }
        }

        // Matrix addition
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
            }
        }

        // Display result
        printf("Resultant Matrix after addition:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix addition not possible. Dimensions do not match.\n");
    }

    return 0;
}
