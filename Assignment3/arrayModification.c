#include <stdio.h>
#include <stdlib.h>

void modify(int *, int n);

int main()
{
    int a[5], i;
    printf("Enter numbers of array:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", (a + i));
    }
    modify(a, 5);
    printf("Modified array:");
    for (i = 0; i < 5; i++)
    {
        printf("\t %d", *(a + i)); 
    }
    return 0;
}

void modify(int p[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        *p = *p * 4;
        p++;
    }
}
