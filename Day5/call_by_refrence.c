#include <stdio.h>

// Function to swap values using pointers
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 5, y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);

    // Passing addresses to the function
    swap(&x, &y);

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
