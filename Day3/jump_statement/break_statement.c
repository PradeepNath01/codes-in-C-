#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
            break;
        printf("%d\n", i);
    }
    return 0;
}
// This program demonstrates the use of the break statement in a for loop.
// It prints the numbers from 1 to 5, but when it reaches the number 3, it breaks out of the loop.