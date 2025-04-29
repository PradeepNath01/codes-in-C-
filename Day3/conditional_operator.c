/*#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Conditional operator: (condition) ? value_if_true : value_if_false
    (number % 2 == 0) ? printf("Even\n") : printf("Odd\n");

    return 0;
} */
/*#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int max = (a > b) ? a : b;
    printf("The maximum number is: %d\n", max);

    return 0;
} */

/*#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    (num > 0) ? printf("Positive\n") :
    (num < 0) ? printf("Negative\n") :
                printf("Zero\n");

    return 0;
} */

/*#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    char grade = (marks >= 90) ? 'A' : (marks >= 75) ? 'B'
                                   : (marks >= 60)   ? 'C'
                                   : (marks >= 40)   ? 'D'
                                                     : 'F';

    printf("Your grade is: %c\n", grade);

    return 0;
} */

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);

    printf("The largest number is: %d\n", max);

    return 0;
}
