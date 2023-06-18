#include <stdio.h>
int main()
{
    int arr[5], sum = 0, i;
    int n;
    float avg;
    printf("Enter the number of arrays:");
    scanf("%d", &n);
    printf("Enter the array:");
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    avg = sum / n;

    printf("The sum is: %d \n", sum);
    printf("The avg number is %f", avg);

    return 0;
}
