// Addition of two numbers
#include <stdio.h>

int main()
{
    int num1, num2, sum;

    // Input the two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Adding the numbers
    sum = num1 + num2;

    // Printing the result
    printf("The sum of %d and %d is %d.\n", num1, num2, sum);

    return 0;
}
