#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter static boundary:");
    scanf("%d", &n);

    int *array;
    array = (int *)malloc(n * sizeof(int));

    int i, j;
    for (i = 0; i < n; i++)
    {
        scanf("%d", (array + i));
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (*(array + j) > *(array + j + 1))
            {
                int temp = *(array + j);
                *(array + j) = *(array + j + 1);
                *(array + j + 1) = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", *(array + i));
    }

    free(array);
    return 0;
}
