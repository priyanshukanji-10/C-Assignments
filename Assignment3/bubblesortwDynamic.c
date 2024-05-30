#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *, int);
void swap(int *, int *);
int main()
{

    int n;
    printf("Enter static boundary:");
    scanf("%d", &n);
    int *a;
    a = (int *)malloc(n * sizeof(int));
    int i;
    // Taking array input;
    for (i = 0; i < n; i++)
    {
        scanf("%d", (a + i));
    }
    bubbleSort(a, n);
    for (i = 0; i < n; i++)
    {
        printf("%d", *(a + i));
    }
}

void bubbleSort(int *p, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (*(p + j) > *(p + j + 1))
            {
                swap((p + j), (p + j + 1));
            }
        }
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
