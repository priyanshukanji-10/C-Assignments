/* Program to add the square of the numbers in the series */
/* 1^2 + 2^2 + .......... + n^2 */
#include <stdio.h>
int sqAddition(int); //Function prototype.
int main()
{
    printf("Adding the square of the numbers in the series");
    int range, sum;
    printf("Give the range:");
    scanf("%d", &range);
    sum = sqAddition(range);
    printf("Sum of the given series is %d", sum);
}
int sqAddition(int range)
{
    int sum = 0;
    for (int i = 1; i <= range; i++)
    {
        sum += i * i;
    }
    return sum;
}