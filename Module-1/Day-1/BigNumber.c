#include <stdio.h>
int main()
{
    int number1, number2;
    printf("Enter the 1st number:");
    scanf("%d", &number1);
    printf("Enter the 2nd number:");
    scanf("%d", &number2);
    if (number1 > number2)
    {
        printf("The big number is %d", number1, number2);
    }
    else
    {
        printf("it is small number");
    }
    return 0;
}