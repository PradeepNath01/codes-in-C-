#include <stdio.h>

int main() {
    int num1, num2, max;

    // Input two numbers from user
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Start from the maximum of the two numbers
    max = (num1 > num2) ? num1 : num2;

    // Loop until we find a common multiple
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            printf("LCM of %d and %d is %d\n", num1, num2, max);
            break; // LCM found
        }
        max++; // try next number
    }

    return 0;
}