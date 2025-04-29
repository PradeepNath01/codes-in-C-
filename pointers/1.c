#include <stdio.h>

void readMatrix(int *mat)
{
    printf("Enter elements of 3x3 matrix:\n");
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", (mat + i));
    }
}

void addMatrix(int *mat1, int *mat2, int *result)
{
    for (int i = 0; i < 9; i++)
    {
        *(result + i) = *(mat1 + i) + *(mat2 + i);
    }
}

void displayMatrix(int *mat)
{
    printf("Matrix:\n");
    for (int i = 0; i < 9; i++)
    {
        printf("%d\t", *(mat + i));
        if ((i + 1) % 3 == 0)
            printf("\n");
    }
}

int main()
{
    int mat1[3][3], mat2[3][3], result[3][3];
    int sumLastTwoCols1 = 0, sumLastTwoCols2 = 0;

    printf("Enter Matrix 1:\n");
    readMatrix(&mat1[0][0]);

    printf("Enter Matrix 2:\n");
    readMatrix(&mat2[0][0]);

    addMatrix(&mat1[0][0], &mat2[0][0], &result[0][0]);

    printf("\nResultant Matrix (Sum of two matrices):\n");
    displayMatrix(&result[0][0]);

    // Sum of last two columns
    for (int i = 0; i < 3; i++)
    {
        sumLastTwoCols1 += mat1[i][1] + mat1[i][2];
        sumLastTwoCols2 += mat2[i][1] + mat2[i][2];
    }

    printf("\nSum of elements of last two columns of Matrix 1: %d\n", sumLastTwoCols1);
    printf("Sum of elements of last two columns of Matrix 2: %d\n", sumLastTwoCols2);

    return 0;
}
