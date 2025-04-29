#include <stdio.h>

int main()
{
    int day;

    printf("Enter a number (1 to 7): ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("Wednesday\n");
        break;
    case 5:
        printf("Thursday\n");
        break;
    case 6:
        printf("Friday\n");
        break;
    case 7:
        printf("Saturday\n");
        break;
    default:
        printf("Invalid input! Please enter a number from 1 to 7.\n");
    }

    return 0;
}
// This program uses a switch statement to print the name of the day based on the number entered by the user.
// The user is prompted to enter a number from 1 to 7, and the program prints the corresponding day of the week.
// If the input is not in the range of 1 to 7, it prints an error message indicating that the input is invalid.
// The program uses the standard input/output library to handle user input and output.
// The switch statement allows for cleaner and more organized code when dealing with multiple conditions.