#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int rollNumber;
    char name[50];
    float marks;
};

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    // Dynamic memory allocation
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));
    if (students == NULL)
    {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }
    // Read
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter roll number: ");
        scanf("%d", &(students[i].rollNumber));
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter marks: ");
        scanf("%f", &(students[i].marks));
    }
    // Display
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }
    free(students);
    return 0;
}
