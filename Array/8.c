// matrix subtraction
#include <stdio.h>

int main()
{
    int i, j, rows, cols;
    int A[10][10], B[10][10], diff[10][10];

    printf("Enter rows and columns of matrices: ");
    scanf("%d%d", &rows, &cols);

    printf("Enter elements of first matrix (A):\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of second matrix (B):\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &B[i][j]);

    // Subtraction
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            diff[i][j] = A[i][j] - B[i][j];

    printf("Difference of matrices:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%d ", diff[i][j]);
        printf("\n");
    }

    return 0;
}
