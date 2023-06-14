#include <stdio.h>
int main()
{
    int scores;
    printf("Enter the student score:");
    scanf("%d", &scores);
    if (scores >= 90 && scores <= 100)
    {
        printf("Student Grade IS 'A'");
    }
    else if (scores >= 75 && scores <= 89)
    {
        printf("Student Grade IS 'B'");
    }
    else if (scores >= 60 && scores <= 74)
    {
        printf("Student Grade IS 'C'");
    }
    else if (scores >= 50 && scores <= 59)
    {
        printf("Student Grade IS 'D'");
    }
    else if (scores >= 0 && scores <= 49)
    {
        printf("Student Grade IS 'F'");
    }
    else
    {
        printf("Invalid score");
    }

    return 0;
}