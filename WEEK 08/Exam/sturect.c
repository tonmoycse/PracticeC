#include <stdio.h>

struct student
{
    char name[100];
    int roll;
    int marks;
};

int main()
{
    struct student stdinfo;

    printf("Enter information: \n");

    printf("Enter name : ");
    scanf("%s", &stdinfo.name);

    printf("Enter roll number: ");
    scanf("%d", &stdinfo.roll);

    printf("Enter marks: ");
    scanf("%d", &stdinfo.marks);

    printf("\nDisplaying Information:\n");
    printf("Name: %s\nRoll number: %d\nMarks: %d\n",stdinfo.name, stdinfo.roll, stdinfo.marks);

    return 0;
}
