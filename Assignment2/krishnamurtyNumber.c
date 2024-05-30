#include <stdio.h>
int fact(int num)
{
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result *= i;
    }
    return result;
}
int main()
{
    int num, result = 0;
    printf("Enter Number:");
    scanf("%d", &num);
    int numCopy = num;
    while (num > 0)
    {
        int r = num % 10;
        result += fact(r);
        num = num / 10;
    }
    if (result == numCopy)
    {
        printf("%d is  a Krishnamurti Number", numCopy);
    }
    else
    {
        printf("%d is not a Krishnamurti Number", numCopy);
    }
    return 0;
}