/*
1.Write a program to check whether the year entered is Leap Year or not (using conditional operator).
*/
#include <stdio.h>
int main()
{
    printf("Check if the year is leap year \n");
    int givenYear;
    printf("Enter the year to check:");
    scanf("%d", &givenYear);
    int isLeapYear = ((givenYear % 4 == 0 && givenYear % 100 != 0) || (givenYear % 400 == 0));
    printf("%d is %s a leap year.", givenYear, isLeapYear ? "" : "not");
}