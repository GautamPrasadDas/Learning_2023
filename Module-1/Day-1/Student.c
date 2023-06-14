#include <stdio.h>
#include <string.h>
int main()
{
    int rollNo, total, physics, math, chemistry;
    float marks, percentage;
    char name[100];

    // Student name and rollNo input
    printf("Enter the  your name:");
    fgets(name, 100, stdin);
    printf("Enter the rollNo: ");
    scanf("%d", &rollNo);

    // Subjects Inputs
    printf("Enter the marks of Physics:");
    scanf("%d", &physics);
    printf("Enter the marks of Math:");
    scanf("%d", &math);
    printf("Enter the marks of Chemistry: ");
    scanf("%d", &chemistry);

    // Count of total
    total = physics + math + chemistry;

    // Count of percentage
    percentage = total / 3.0;
    // Percentage condition
    if (percentage >= 60 && percentage <= 100)
    {
        printf("Score Above 60 percentage ");
    }
    else if (percentage <= 59 && percentage >= 49)
    {
        printf("Scored between 59 percentage to 49 percenatge");
    }
    else if (percentage <= 48 && percentage <= 33)

    {
        printf("Score between 48 percentage to 33 percenatge");
    }
    printf("\nName of Student : %s\nRoll No : %d", rollNo, name);
    printf("Marks in Physics : %d\nMarks in math : %d\nMarks in chemistry: %d\n", physics, math, chemistry);
    printf("Total Marks = %d\nPercentage = %5.2f\n", total, percentage);
    return 0;
}