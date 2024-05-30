#include <stdio.h>
int fact(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        int result = 1;
        for (int i = 1; i <= num; i++)
        {
            result *= i;
        }
        return result;
    }
}
int main()
{
    int num, result;

    printf("Enter Number:");
    scanf("%d", &num);

    result = fact(num);
    printf("Factorial of the given number is :%d", result);
    return 0;
}
