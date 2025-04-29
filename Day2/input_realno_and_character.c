#include <stdio.h>
#include <string.h>

int main()
{
    float realNumber;
    char character;

    // Input real number
    printf("Enter a real number: ");
    scanf("%f", &realNumber);

    // Input character
    printf("Enter a character: ");
    scanf(" %c", &character); // space before %c handles leftover newline

    // Output the values
    printf("\nYou entered:\n");
    printf("Real number: %.2f\n", realNumber);
    printf("Character: %c\n", character);

    return 0;
}
