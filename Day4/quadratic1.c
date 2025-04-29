#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, discriminant, x1, x2, real, imag;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant == 0)
    {
        printf("The roots are real and equal.\n");
        x1 = -b / (2 * a);
        printf("x1 = x2 = %.2f\n", x1);
    }
    else if (discriminant > 0)
    {
        printf("The roots are real and distinct.\n");
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("x1 = %.2f and x2 = %.2f\n", x1, x2);
    }
    else
    {
        printf("The roots are imaginary.\n");
        real = -b / (2 * a);
        imag = sqrt(-discriminant) / (2 * a);
        printf("x1 = %.2f + i%.2f and x2 = %.2f - i%.2f\n", real, imag, real, imag);
    }

    return 0;
}
