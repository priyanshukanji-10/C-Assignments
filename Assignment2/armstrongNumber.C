#include <stdio.h>
#include <math.h>

int main()
{
    printf("Enter Number:");
    int num;
    scanf("%d", &num);

    int originalNum = num;
    int sum = 0;
    while (num > 0)
    {
        int r = num % 10;
        sum += pow(r, 3);
        num = num / 10;
    }
    printf("%d \n", sum);
    if (sum == originalNum)
    {
        printf("%d is an Armstrong number\n", originalNum);
    }
    else
    {
        printf("%d is not an Armstrong number\n", originalNum);
    }
    return 0;
}
