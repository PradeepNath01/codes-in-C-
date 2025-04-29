#include <stdio.h>

// Function that takes two integers and prints their sum
void displaySum(int a, int b)
{
    int sum = a + b;
    printf("Sum = %d\n", sum);
}

int main()
{
    int x = 10, y = 20;

    // Passing values to the function
    displaySum(x, y);

    return 0;
}
// In this example, the values of x and y are passed to the displaySum function. The function calculates the sum and prints it. The original values of x and y in main remain unchanged.
// This demonstrates the concept of "call by value" in C, where the function receives copies of the arguments passed to it.