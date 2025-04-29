// Write a program to make a binary file and write / read student data.
#include <stdio.h>
#include <stdlib.h>

// Define the student structure
typedef struct
{
    char name[50];
    int roll;
    float mark;
} Student;

int main()
{
    // Define the student data
    Student students[3] = {
        {"Ashma", 1, 85.5},
        {"pradeep", 2, 90.0},
        {"xyz", 3, 78.0}};

    // Write data to a binary file
    FILE *file = fopen("students.dat", "wb");
    if (file == NULL)
    {
        perror("Error opening file");
        return EXIT_FAILURE;
    }
    fwrite(students, sizeof(Student), 3, file);
    fclose(file);

    // Read data from the binary file
    Student loaded_students[3];
    file = fopen("students.dat", "rb");
    if (file == NULL)
    {
        perror("Error opening file");
        return EXIT_FAILURE;
    }
    fread(loaded_students, sizeof(Student), 3, file);
    fclose(file);

    // Display the loaded data
    for (int i = 0; i < 3; i++)
    {
        printf("Name: %s, Roll: %d, Mark: %.2f\n", loaded_students[i].name, loaded_students[i].roll, loaded_students[i].mark);
    }

    return 0;
}
