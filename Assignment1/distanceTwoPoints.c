/*
Write a C program to calculate the distance between the two points.
Note: x1, y1, x2, y2 are all double values.

*/
#include <stdio.h>
#include <math.h>

int main()
{
    printf("Calculating distance between two points\n");

    double x1, x2, y1, y2;
    printf("Enter the x coordinate of first point: ");
    scanf("%lf", &x1);

    printf("Enter the y coordinate of first point: ");
    scanf("%lf", &y1);

    printf("Enter the x coordinate of second point: ");
    scanf("%lf", &x2);

    printf("Enter the y coordinate of second point: ");
    scanf("%lf", &y2);

    double subXCoordinate = x2 - x1;
    double subYCoordinate = y2 - y1;
    double squareSub_XCoordinate = pow(subXCoordinate, 2);
    double squareSub_YCoordinate = pow(subYCoordinate, 2);
    double add = squareSub_XCoordinate + squareSub_XCoordinate;
    double distance = sqrt(add);
    printf("Distance is %lf\n", distance);

    return 0;
}
