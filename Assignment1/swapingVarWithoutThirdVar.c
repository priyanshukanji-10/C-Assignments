/*
Write a program in c  to interchange the value of those two integer variables .
b)without using third variable
*/
#include <stdio.h>

int main()
{
    int firstVariable, secondVariable;
    firstVariable = 12;
    secondVariable = 5;
    firstVariable = firstVariable + secondVariable;
    secondVariable = firstVariable - secondVariable;
    firstVariable = firstVariable - secondVariable;
    printf("First Variable is %d\n", firstVariable);
    printf("Second Variable is %d\n", secondVariable);
    return 0;
}
