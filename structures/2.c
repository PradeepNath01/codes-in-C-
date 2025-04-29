#include <stdio.h>

int main()
{
    struct Student
    {
        char name[20];
        int roll;
        float marks;
    };

    struct Student s[5]; // You used 5 here (but instruction said 100)

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nDisplaying Information:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nName: %s", s[i].name);
        printf("\nRoll: %d", s[i].roll);
        printf("\nMarks: %.2f\n", s[i].marks);
    }

    return 0;
}
