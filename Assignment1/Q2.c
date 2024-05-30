/*
Write a C program to check 2 given integers and print "True" if one of them is 30 or if their sum is 30.
*/
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);

    int add = num1 + num2;
    if (add == 30 || num1 == 30 || num2 == 30)
    {
        printf("True");
    }
    else
    {
        printf("False");
    };
}