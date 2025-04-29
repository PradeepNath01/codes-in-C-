#include <stdio.h>

struct student
{
    char name[20];
    int roll;
    float marks[5];
} S;

int main()
{
    int i;
    float sum = 0, per;

    printf("Enter name & roll of student:\n");
    gets(S.name);
    scanf("%d", &S.roll);

    printf("\nEnter marks for 5 subjects:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%f", &S.marks[i]);
        sum += S.marks[i];
    }

    per = (sum / 500) * 100;

    printf("\nName: %s", S.name);
    printf("\nRoll: %d", S.roll);
    printf("\nPercentage: %.2f%%", per);

    return 0;
}
