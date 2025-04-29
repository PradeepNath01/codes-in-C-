// Transpose of a matrix
#include <stdio.h>

int main()
{
    int A[10][10], transpose[10][10];
    int i, j, rows, cols;

    printf("Enter rows and columns of matrix: ");
    scanf("%d%d", &rows, &cols);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &A[i][j]);

    // Transpose
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            transpose[j][i] = A[i][j];

    printf("Transpose of the matrix:\n");
    for (i = 0; i < cols; i++)
    {
        for (j = 0; j < rows; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }

    return 0;
}
