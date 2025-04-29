#include <stdio.h>

int main()
{
    register int i; // register variable (faster access, if possible)

    printf("Counting from 1 to 5:\n");

    for (i = 1; i <= 5; i++)
    {
        printf("%d ", i);
    }

    return 0;
}
// In this example, the variable i is declared as a register variable. This suggests to the compiler that it should try to store i in a CPU register for faster access. The program counts from 1 to 5 and prints the numbers. Note that the actual behavior of register variables is implementation-dependent, and modern compilers often optimize variable storage automatically.
// The register keyword is a hint to the compiler that the variable will be heavily used and should be stored in a CPU register if possible. However, the compiler may ignore this suggestion if it deems it unnecessary or if there are not enough registers available.