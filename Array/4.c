// Insert an element into a 1D array at a given position
#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE], i, size, num, pos;

    // Input array size
    printf("Input the size of array: ");
    scanf("%d", &size);

    // Input elements
    printf("Input elements:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input number to insert and position
    printf("Input element and position to insert: ");
    scanf("%d %d", &num, &pos);

    // Validate position
    if (pos < 0 || pos > size)
    {
        printf("Invalid position! Please enter position between 0 and %d.\n", size);
    }
    else
    {
        // Shift elements to the right
        for (i = size; i > pos; i--)
        {
            arr[i] = arr[i - 1];
        }

        // Insert the number
        arr[pos] = num;
        size++;

        // Display updated array
        printf("Array after insertion:\n");
        for (i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
