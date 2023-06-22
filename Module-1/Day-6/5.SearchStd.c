#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    int marks;
} Student;

int searchStudent(Student arr[], int n, const char *name)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (strcmp(arr[i].name, name) == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    Student students[5] = {
        {"Alice", 80},
        {"Bob", 65},
        {"Charlie", 90},
        {"David", 75},
        {"Eve", 85}};

    int numStudents = sizeof(students) / sizeof(students[0]);

    char searchName[50];
    printf("Enter the name of the student to search: ");
    scanf("%s", searchName);

    int index = searchStudent(students, numStudents, searchName);

    if (index != -1)
    {
        printf("Student found at index %d\n", index);
        printf("Name: %s\tMarks: %d\n", students[index].name, students[index].marks);
    }
    else
    {
        printf("Student not found.\n");
    }

    return 0;
}