#include <stdio.h>

// 🔵 Global variable
int a, b, sum;

void calculateSum()
{
    sum = a + b; // Accessing global variables directly
}

int main()
{
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b); // Assigning values to global variables

    calculateSum(); // Function uses global variables

    printf("Sum = %d\n", sum); // Output the global result

    return 0;
}
// In this example, the variables a, b, and sum are declared globally. The function calculateSum() accesses these global variables directly to compute the sum. The main function assigns values to a and b and then calls calculateSum() to perform the calculation. Finally, it prints the result stored in the global variable sum.