// sorting an array using bubble sort
#include <stdio.h>

void short_array(int b[], int n);
void display(int b[], int n);

int main()
{
    int b[20], i, n;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    short_array(b, n);
    display(b, n);

    return 0;
}

void short_array(int b[], int n)
{
    int i, j, t;

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (b[i] > b[j])
            {
                t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
        }
    }
}

void display(int b[], int n)
{
    int i;
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
}
