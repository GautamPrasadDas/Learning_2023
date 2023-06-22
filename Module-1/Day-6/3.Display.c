#include <stdio.h>
#include <string.h>

struct Student
{
    int RollNo;
    char name[20];
    float Marks;
};
typedef struct Student Student;
void initStudent(Student *, int, char *, float);
void displayStudent(Student *);
int main()
{
    int size = 2;
    int rollNo;
    char n[20];
    float marks;
    Student arr[size]; // == studnet s1; Student  s2;
    printf("Scanning\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &rollNo);
        scanf("%s", n);
        scanf("%f", &marks);
        initStudent(&arr[i], rollNo, n, marks);
    }
    printf("Displaying\n");
    for (int i = 0; i < size; i++)
    {
        displayStudent(&arr[i]);
    }
    return 0;
}
void initStudent(Student *ptr, int rollNo, char *nptr, float Marks)
{
    // initialize structure's members
    ptr->RollNo = rollNo;
    ptr->Marks = Marks;
    strcpy(ptr->name, nptr);
}
void displayStudent(Student *ptr)
{
    printf("%d, %s, %.2f\n", ptr->RollNo, ptr->name, ptr->Marks);
}