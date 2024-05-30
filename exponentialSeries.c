#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
int factorial(int);
double expo(double, int);

int main()
{
    double x;
    int range;

    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter the range of expansion: ");
    scanf("%d", &range);
    double result = expo(x, range);
    printf("Result is :%lf", result);
}
int factorial(int n)
{
    if (n == 0)
        return 1;
    int result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
double expo(double x, int range)
{
    double sum = 1, i = 1;
    for (i; i <= range; i++)
    {
        sum += pow(x, i) / factorial(i);
    }
    return sum;
}
