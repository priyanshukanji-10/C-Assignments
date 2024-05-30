
/*
Write a C program to read roll no, name and marks of three subjects and calculate the total, percentage and division.
Test Data :
Input the Roll Number of the student :784
Input the Name of the Student :James
Input the marks of Physics, Chemistry and Computer Application : 70 80 90
Expected Output :
Roll No : 784
Name of Student : James
Marks in Physics : 70
Marks in Chemistry : 80
Marks in Computer Application : 90
Total Marks = 240
Percentage = 80.00
Division = First

*/
#include <stdio.h>

int main()
{
    int rollNo, physicsMarks, chemistryMarks, computerApplicationMarks, totalMarks;
    char studentName[50];
    // Declaring Variables.

    printf("Enter the roll no of the student: ");
    scanf("%d", &rollNo);

    printf("Enter the name of the student: ");
    scanf("%s", studentName);

    printf("Enter Physics marks: ");
    scanf("%d", &physicsMarks);

    printf("Enter Chemistry marks: ");
    scanf("%d", &chemistryMarks);

    printf("Enter Computer Application marks: ");
    scanf("%d", &computerApplicationMarks);
    // Taking input from the user
    totalMarks = physicsMarks + chemistryMarks + computerApplicationMarks;
    float percentage = ((float)totalMarks / 3);
    // Backgroun calculations
    printf("\nRoll No: %d\n", rollNo);
    printf("Name of student: %s\n", studentName);
    printf("Marks in Physics: %d\n", physicsMarks);
    printf("Marks in Chemistry: %d\n", chemistryMarks);
    printf("Marks in Computer Application: %d\n", computerApplicationMarks);
    printf("Total Marks: %d\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    // Showing results.
    if (percentage >= 60)
    {
        printf("Division = First\n");
    }
    else if (percentage >= 50)
    {
        printf("Division = Second\n");
    }
    else if (percentage >= 40)
    {
        printf("Division = Third\n");
    }
    else
    {
        printf("Division = Fail\n");
    }

    return 0;
}
