#include <stdio.h>
int minValue(int *, int);

int main()
{
    int n,i;
    printf("Find the minimum value in a Array:\n");
    printf("Give boundary of the array:");
    scanf("%d", &n);
	int a[n];
    printf("Give %d numbers:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", (a + i));
    }
    int min = minValue(a, n);
    printf("Minimum value in the array is %d", min);
    return 0;
}

int minValue(int p[], int n)
{
    int i, min = p[0];
    for (i = 0; i < n; i++)
    {
        if (p[i] < min)
        {
            min = p[i];
        }
    }
    return min;
}
