/*
Write a program in c to calculate area of a triangle.(Your program should contain the condition to  check sum of two sides greater than the third side )

*/
#include <stdio.h>
#include <math.h>

int main() {
    float side1, side2, side3;
    printf("Enter the value of side1: ");
    scanf("%f", &side1);
    printf("Enter the value of side2: ");
    scanf("%f", &side2);
    printf("Enter the value of side3: ");
    scanf("%f", &side3);

    if (side1 + side2 > side3 && side2 + side3 > side1 && side3 + side1 > side2) {
        float semiPerimeter = (side1 + side2 + side3) / 2;
        float area = sqrt(semiPerimeter * (semiPerimeter - side1) * (semiPerimeter - side2) * (semiPerimeter - side3));
        printf("Area of the given triangle is %f units.\n", area);
    } else {
        printf("With these lengths, a triangle cannot be formed.\n");
    }
    
    return 0;
}
