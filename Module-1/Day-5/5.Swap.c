#include <stdio.h>
#include <string.h>
struct Person
{
    char name[50];
    int age;
};

void Swap(struct Person *person1, struct Person *person2)
{
    struct Person temp;
    strcpy(temp.name, person1->name);
    strcpy(person1->name, person2->name);
    strcpy(person2->name, temp.name);

    temp.age = person1->age;
    person1->age = person2->age;
    person2->age = temp.age;
}
int main()
{
    struct Person person1, person2;
    printf("Enter the person1 name:");
    scanf("%s", person1.name);
    printf("Enter the person1 age:");
    scanf("%d", &person1.age);
    printf("Enter the person2 name:");
    scanf("%s", person2.name);
    printf("Enter the person2 age:");
    scanf("%d", &person2.age);

    printf("Before Swapping:\n");
    printf("Person 1:Name-%s, Age-%d \n", person1.name, person1.age);
    printf("Person 2:Name-%s, Age-%d \n", person2.name, person2.age);

    Swap(&person1, &person2);
    printf("After Swapping:\n");
    printf("Person 1:Name-%s ,Age-%d \n", person1.name, person1.age);
    printf("Person 1:Name-%s ,Age-%d \n", person1.name, person2.age);
    return 0;
}
