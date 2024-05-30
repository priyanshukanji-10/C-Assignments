#include <stdio.h>

int linearSearch(int[], int, int);

int main()
{
    int n;
    printf("Enter the range of the array: \n");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d numbers in array: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (a + i));
    }

    int searchElem;
    printf("Enter Search Element: ");
    scanf("%d", &searchElem);

    int foundIndex = linearSearch(a, searchElem, n);
    if (foundIndex == -1)
    {
        printf("Element not found!!\n");
    }
    else
    {
        printf("Element found at index: %d\n", foundIndex);
    }
    return 0;
}

int linearSearch(int p[], int s, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (s == p[i])
        {
            return i;
        }
    }
    return -1;
}
