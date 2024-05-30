/*
 Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
Equilateral triangle: An equilateral triangle is a triangle in which all three sides are equal. In the familiar Euclidean geometry, equilateral triangles are also equiangular; that is, all three internal angles are also congruent to each other and are each 60°.
Isosceles triangle: An isosceles triangle is a triangle that has two sides of equal length.
Scalene triangle: A scalene triangle is a triangle that has three unequal sides, such as those illustrated above.
*/
#include <stdio.h>
int main()
{
    float side1, side2, side3;
    printf("Enter the value of side1: ");
    scanf("%f", &side1);
    printf("Enter the value of side2: ");
    scanf("%f", &side2);
    printf("Enter the value of side3: ");
    scanf("%f", &side3);
    if (side1 + side2 > side3 && side2 + side3 > side1 && side3 + side1 > side2)
    {
        if (side1 == side2 && side2 == side3 && side3 == side1)
        {
            printf("The triangle formed is Equilateral Triangle");
        }
        else if (side1 == side2 || side2 == side3 || side3 == side1)
        {
            printf("The triangle formed is Isosceles Triangle");
        }
        else
        {
            printf("The triangle formed is Scalene Triangle");
        }
    }
    else
        printf("With these lengths, a triangle cannot be formed.\n");
}