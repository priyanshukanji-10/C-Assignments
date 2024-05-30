#include <stdio.h>
#include <math.h>
int quadraticRoots(int, int, int);
int main()
{
    printf("Quadratic equation looks like \n ax^2 + bx + c = 0 \nEnter values of coefficient: \n");
    int a, b, c;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    printf("Enter c:");
    scanf("%d", &c);
    int result = quadraticRoots(a, b, c);
}
int quadraticRoots(int a, int b, int c)
{
    int discriminant, numerator1, numerator2, x1, x2;
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        numerator1 = -b + sqrt(discriminant);
        numerator2 = -b - sqrt(discriminant);
        x1 = numerator1 / (2 * a);
        x2 = numerator2 / (2 * a);
        printf("Roots of the equation are \n x1=%d \n x2=%d", x1, x2);
    }
    else if (discriminant == 0)
    {
        x1 = -b / 2 * a;

        printf(" This equation has only one unique root \n x1=x2=%d ", x1);
    }
    else
    {
        printf("This equation have complex roots!! \n Try again.");
    }
    return x1, x2;
}