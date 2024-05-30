// Sine programm using taylor series.....
#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
int factorial(int);
double cosine(float, int);

int main()
{
    double angle;
    int range;

    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle);
    printf("Enter the range of expansion: ");
    scanf("%d", &range);
    double cosx = cosine(angle, range);
    printf("cosine value for %f degrees is %lf\n", angle, cosx);
    return 0;
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
double cosine(float angle, int range)
{
    double angleRadian, cosx = 1.0;

    double pi = M_PI;
    angleRadian = pi * angle / 180.0;
    int i;
    for (i = 1; i <= range; i++)
    {
        if (i % 2 == 0)
        {
            cosx -= pow(angleRadian, 2 * i) / factorial(2 * i);
        }
        else
        {
            cosx += pow(angleRadian, 2 * i ) / factorial(2 * i );
        }
    }
    return cosx;
}