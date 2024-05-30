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
    int i;
    for (i = 0; i < n; i++)
    {
        if (searchElem == *(a + i))
        {
            printf("Element %d found at index", searchElem, i);
        }
    }
    if (i == n - 1)
    {
        printf("Element found\n");
    }
    else
    {
        printf("Element not found");
    }
}
