#include <stdio.h>

int main()
{
    int i, j;

    // Loop through the rows
    for (i = 0; i < 5; i++)
    {
        // Print first part of the pattern
        for (j = 0; j < 5 - i; j++)
        {
            printf("%c ", 'A' + j); // Print letters A, B, C, D, ...
        }

        // Print second part of the pattern, in reverse
        for (j = 4 - i; j >= 0; j--)
        {
            printf("%c ", 'A' + j); // Print letters in reverse
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}