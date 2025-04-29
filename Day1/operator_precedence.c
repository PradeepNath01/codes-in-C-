#include <stdio.h>

int main()
{
    int a = 10, b = 5, c = 2;
    int result;

    // Operator Precedence Example
    result = a + b * c; // Multiplication has higher precedence than addition
    printf("a + b * c = %d (b * c is evaluated first)\n", result);

    // Parentheses to change precedence
    result = (a + b) * c; // Parentheses force addition to happen first
    printf("(a + b) * c = %d (a + b is evaluated first)\n", result);

    // Associativity Example (left-to-right for arithmetic operators)
    result = a - b - c; // Equivalent to ((a - b) - c)
    printf("a - b - c = %d (left-to-right associativity)\n", result);

    // Right-to-left associativity example (assignment operators)
    int x;
    x = a = b = 20; // Assignment is right to left
    printf("x = a = b = 20 -> x = %d, a = %d, b = %d\n", x, a, b);

    return 0;
}
// This program demonstrates operator precedence and associativity in C.
// It shows how different operators are evaluated based on their precedence and associativity rules.
// The program includes examples of arithmetic operations, the use of parentheses to change precedence, and the associativity of operators.
// The output will display the results of the operations, illustrating how operator precedence and associativity affect the final result.
// The program is a simple and effective demonstration of operator precedence and associativity in C programming.
// The operator precedence determines the order in which operators are evaluated in an expression.
// The associativity of operators determines the order in which operators of the same precedence level are evaluated.
// The program can be modified to include additional examples or to demonstrate different operators and their precedence levels.
// The use of parentheses is a common practice to ensure the desired order of evaluation in complex expressions.
// The program is easy to understand and can be used as a reference for learning about operator precedence and associativity in C.

// The output will show the results of the operations, including the values of a, b, c, and x, and the results of each operation.
// The program is a simple and effective demonstration of operator precedence and associativity in C programming.
// The operator precedence determines the order in which operators are evaluated in an expression.
// The associativity of operators determines the order in which operators of the same precedence level are evaluated.