// Program to calculate sine series using Taylor series expansion
// sin(x) = x - (x^3)/3! + (x^5)/5! - (x^7)/7! + ... + ((-1)^n * x^(2n+1))/(2n+1)!
#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, n;
    float x, radian, term, sum = 0.0;
    int sign = 1;
    long fact;

    printf("Enter angle x (in degrees) and number of terms (n): ");
    scanf("%f %d", &x, &n);

    // Convert degrees to radians
    radian = x * 3.14 / 180;

    for (i = 1; i <= n; i += 2)
    {
        fact = 1;

        // Calculate factorial of i
        for (j = 1; j <= i; j++)
        {
            fact *= j;
        }

        // Add current term to sum
        term = sign * pow(radian, i) / fact;
        sum += term;

        // Alternate the sign
        sign *= -1;
    }

    printf("Sum of sine series up to %dth power of x is: %.4f\n", n, sum);
    return 0;
}
