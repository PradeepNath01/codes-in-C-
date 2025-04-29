// Make fwu_soe.txt, write string and read back. (4 marks)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char str[50];

    // Open file for writing
    fp = fopen("fwu_soe.txt", "w");
    if (fp == NULL)
    {
        printf("Error creating file!\n");
        exit(1);
    }

    // Write string to file
    fputs("I Belong To SOE FWU", fp);
    fclose(fp);

    // Open file for reading
    fp = fopen("fwu_soe.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    // Read string from file
    fgets(str, sizeof(str), fp);
    printf("The content of file is:\n%s\n", str);

    fclose(fp);

    return 0;
}
