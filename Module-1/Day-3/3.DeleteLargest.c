#include <stdio.h>
int deleteDigitAndGetLargest(int num)
{
    int largest = 0;
    int divisor = 1;
    int temp = num;
    while (divisor <= temp)
    {
        int reducedNum = (temp / (divisor * 10)) * divisor + (temp % divisor);
        if (reducedNum > largest)
        {
            largest = reducedNum;
        }
        divisor *= 10;
    }
    return largest;
}
int main()
{
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    int largestNum = deleteDigitAndGetLargest(num);
    printf("Largest number by deleting a single digit: %d\n", largestNum);
    return 0;
}
