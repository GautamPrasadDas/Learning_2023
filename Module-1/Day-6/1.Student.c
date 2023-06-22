#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    int rollno;
    char name[20];
    float marks;
};

void parseString(const char *input, struct Student *students, int numStudents)
{
    const char *delimiter = " ";
    char *token = strtok((char *)input, delimiter);
    int i = 0;

    while (token != NULL && i < numStudents)
    {
        students[i].rollno = atoi(token);
        token = strtok(NULL, delimiter);
        strncpy(students[i].name, token, sizeof(students[i].name) - 1);
        token = strtok(NULL, delimiter);
        students[i].marks = atof(token);

        token = strtok(NULL, delimiter);
        i++;
    }
}

int main()
{
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    getchar(); // Consume the newline character from the previous input

    struct Student *students = malloc(numStudents * sizeof(struct Student));

    char input[100];
    printf("Enter the student details: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // Remove the trailing newline character

    parseString(input, students, numStudents);

    // Printing the initialized array of structures
    int i;
    for (i = 0; i < numStudents; i++)
    {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n",
               students[i].rollno, students[i].name, students[i].marks);
    }

    free(students);
    return 0;
}