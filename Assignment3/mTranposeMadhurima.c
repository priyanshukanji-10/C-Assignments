#include <stdio.h>

int main()
{
    int r, c, i, j;
    printf("Enter the value of r:");
    scanf("%d", &r);
    printf("Enter the value of c:");
    scanf("%d", &c);
    int a[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int b[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    printf("Inputted matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Transposed matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}