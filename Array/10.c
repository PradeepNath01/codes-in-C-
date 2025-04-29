// Symmetric Matrix
// Program to check if a matrix is symmetric or not
#include <stdio.h>

int main()
{
    int A[10][10], i, j, n, isSymmetric = 1;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    // Check symmetry
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (A[i][j] != A[j][i])
            {
                isSymmetric = 0;
                break;
            }
        }
    }

    if (isSymmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}
