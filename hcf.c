#include <stdio.h>
int hcf(int, int);
int main()
{
    printf("calculating hcf of two numbers \n");
    printf("Enter first number:");
    int num1, num2, result;
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);
    result = hcf(num1, num2);
    printf("hcf of %d & %d is %d", num1, num2, result);
}
int hcf(int a, int b)
{
    int hcf = 1, i;
    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
        return hcf;
    }
}
// toDo Solve the bug