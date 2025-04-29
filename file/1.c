// Write a C program to write name, ID, and weight of employee into a binary file.
#include <stdio.h>
#include <stdlib.h>

struct employee
{
    char name[50];
    int id;
    float weight;
};

int main()
{
    struct employee e;
    FILE *fp;

    // Open file in binary write mode
    fp = fopen("file location", "wb");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("Enter employee name: ");
    gets(e.name);

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter employee weight: ");
    scanf("%f", &e.weight);

    // Write structure to file
    fwrite(&e, sizeof(struct employee), 1, fp);

    printf("Data written successfully to file location\n");

    fclose(fp);

    return 0;
}
