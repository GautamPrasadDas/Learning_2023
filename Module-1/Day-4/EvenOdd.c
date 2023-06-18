#include <stdio.h>
int main()
{
    int i, n, even = 0, odd = 0;
    int arr[10];
    printf("Enter the arrays number:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i <= 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("The even numbers are: %d \n", even);
    printf("The odd numbers are: %d", odd);

    return 0;
}