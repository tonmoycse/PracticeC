#include <stdio.h>

int FindGrade(int marks)
{
    char grade;

    if (marks >= 80 && marks <= 100)
    {
        grade = 'A';
    }

    else if (marks >= 60 && marks <= 79)
    {
        grade = 'B';
    }

    else if (marks >= 40 && marks <= 59)
    {
        grade = 'C';
    }
    else if (marks >= 0 && marks <= 39)
    {
        grade = 'F';
    }
    return grade;
}

int main()
{
    int marks;
    char grade;
    scanf("%d", &marks);

    grade = FindGrade(marks);
    printf("%c", grade);

    return 0;
}