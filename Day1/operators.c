#include <stdio.h>

int main()
{
    int a = 10, b = 5;

    // Arithmetic Operators
    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b); // %% to print %

    // Relational Operators
    printf("\nRelational Operators:\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    // Logical Operators
    printf("\nLogical Operators:\n");
    printf("(a > 0 && b > 0): %d\n", (a > 0 && b > 0)); // Logical AND
    printf("(a > 0 || b < 0): %d\n", (a > 0 || b < 0)); // Logical OR
    printf("!(a == b): %d\n", !(a == b));               // Logical NOT

    return 0;
}
