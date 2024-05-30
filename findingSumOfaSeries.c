// Program to add a series of numbers
#include <stdio.h>
int addition(int range){
int i = 1, sum;
    for (i; i <= range; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    printf("Calculate addition of a series of numbers. ");
    printf("Give the range:");
    int range;
    scanf("%d", &range);
    int sum =addition(range);
    printf("Sum of numbers upto %d is %d", range, sum);
}