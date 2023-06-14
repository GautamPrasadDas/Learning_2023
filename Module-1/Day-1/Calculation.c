#include <stdio.h>
int main()
{
    int Number1, Number2, choice, result;
    int adition, substract, multiplication, mod;
    float division;
    printf("Enter Number1:");
    scanf("%d", &Number1);
    printf("Enter Number2:");
    scanf("%d", &Number2);
    printf("\nEnter Your Choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        result = Number1 + Number2;
        printf("\nThe sum of two number is:%d", result);
        break;
    case 2:
        result = Number1 - Number2;
        printf("\nThe substraction of two number is:%d", result);
        break;
    case 3:
        result = Number1 * Number2;
        printf("\nThe Multiplication of two number is:%d", result);
        break;
    case 4:
        result = Number1 / Number2;
        printf("\nThe Multiplication of two number is:%d", result);
        break;
    case 5:
        mod = Number1 % Number2;
        printf("\nThe mod of two number is:%d", mod);
        break;
    default:
        printf("Invalid ");
    }
    return 0;
}
