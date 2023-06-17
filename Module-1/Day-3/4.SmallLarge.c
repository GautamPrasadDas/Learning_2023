#include <stdio.h>

void findSmallLargeDigits(int n, int numbers[])
{
    int smallDigit = 9;
    int largeDigit = 0;

    for (int i = 0; i < n; i++)
    {
        int temp = numbers[i];

        while (temp > 0)
        {
            int digit = temp % 10;
            if (digit < smallDigit)
            {
                smallDigit = digit;
            }
            if (digit > largeDigit)
            {
                largeDigit = digit;
            }
            temp /= 10;
        }
    }

    printf("Smallest Digit: %d\n", smallDigit);
    printf("Largest Digit: %d\n", largeDigit);
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Not Valid\n");
        return 0;
    }

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    findSmallLargeDigits(n, numbers);

    return 0;
}