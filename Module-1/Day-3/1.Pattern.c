#include <stdio.h>

void printIncreasing(int n);
void printSpaces(int n);
void printDecreasing(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printIncreasing(n);
    printDecreasing(n);
    printf("\n");
    printSpaces(n);
    printf("\n");
    return 0;
}
void printIncreasing(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%d", i);
    }
}
void printDecreasing(int n)
{
    int i;
    for (i = n; i >= 1; i--)
    {
        printf("%d", i);
    }
}
void printSpaces(int n)
{
    int i, j;
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (j = 1; j <= (n - i) * 2; j++)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
