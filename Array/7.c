// Matrix Multiplication in C
#include <stdio.h>

void mult2darray(int A[10][10], int B[10][10], int C[10][10], int r1, int c1, int c2);

int main()
{
    int i, j, k;
    int A[10][10], B[10][10], C[10][10];
    int r1, r2, c1, c2;

    printf("\nEnter size of array A (rows and columns): ");
    scanf("%d %d", &r1, &c1);

    printf("\nEnter size of array B (rows and columns): ");
    scanf("%d %d", &r2, &c2);

    if (c1 == r2)
    {
        printf("\nEnter elements of matrix A:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &A[i][j]);
            }
        }

        printf("\nEnter elements of matrix B:\n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &B[i][j]);
            }
        }

        // Perform multiplication
        mult2darray(A, B, C, r1, c1, c2);

        // Display result
        printf("\nResultant Matrix after multiplication:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix multiplication not possible. Columns of A must match rows of B.\n");
    }

    return 0;
}

void mult2darray(int A[10][10], int B[10][10], int C[10][10], int r1, int c1, int c2)
{
    int i, j, k;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
