#include <stdio.h>
int min_max(int arr[], int n)
{
    int i, min, max;
    min = max = arr[0];
    for (i = 0; i <= n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("The minimum array is: %d \n", min);
    printf("The maximum array is: %d", max);
}
int main()
{
    int arr[20], n, i;
    printf("Enter the array number:");

    scanf("%d", &arr[i]);

    min_max(arr, n);
    return 0;
}