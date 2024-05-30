#include <stdio.h>

int main()
{
    int range, sum = 0;
    printf("Calculate sum of\n1 - 2 + 3 - 4 + 5 - ...... n\n");
    printf("Enter the range:");
    scanf("%d", &range);
    int i;
    for (i = 1; i <= range; i++)
    {
        if (i % 2 != 0)
        {
            sum += i; 
        }
        else
        {
            sum -= i; 
        }
    }

    printf("Sum of the series is: %d", sum);
    return 0;
}
