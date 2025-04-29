#include <stdio.h>
#include <conio.h> // Only needed if you're using getch()

// Defining the structure
struct Student
{
    char name[20];
    int roll;
    float marks;
};

int main()
{
    struct Student s;

    printf("Enter name of student: ");
    gets(s.name); // Again, gets() is unsafe, better to use fgets()

    printf("Enter roll and marks: ");
    scanf("%d %f", &s.roll, &s.marks);

    printf("\nName = %s\nRoll = %d\nMarks = %.2f\n", s.name, s.roll, s.marks);

    getch(); // If you're using Turbo C or DOSBox
    return 0;
}
