//ascending order sort of a string
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if fgets captures it
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    // Simple bubble sort
    for (i = 0; i < len - 1; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (str[i] > str[j])
            {
                // Swap
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("Sorted string: %s\n", str);

    return 0;
}
