#include <stdio.h>

int main()
{
    char str[100]; // Array to store the string (up to 99 characters + '\0')

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string including spaces

    printf("You entered: %s", str);

    return 0;
}
