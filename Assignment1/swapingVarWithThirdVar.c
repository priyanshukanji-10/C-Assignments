/*
Write a program in c  to interchange the value of those two integer variables .
a)using third variable
*/
#include <stdio.h>
int main()
{
    int firstVariable, secondVariable, thirdVariable;
    firstVariable = 12;
    secondVariable = 5;
    thirdVariable = firstVariable;
    firstVariable = secondVariable;
    secondVariable = thirdVariable;
    printf("firstVariable is %d\n", firstVariable);
    printf("secondVariable is %d\n", secondVariable);
}