#include <stdio.h>
int main()
{
    int x = 1;
    if (x == 1)
        goto skip;
    printf("This will be skipped.\n");
skip:
    printf("Jumped to this label.\n");
    return 0;
}
// // This program demonstrates the use of the goto statement in C.
// // It uses a label to skip a section of code and jump to another part of the program.
// // The program prints a message indicating that it jumped to the label, while the skipped section is not executed.
// // The goto statement is generally discouraged in modern programming due to its potential to create unstructured code, but it can be useful in certain situations.