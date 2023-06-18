#include <stdio.h>
int reverse(int array[10], int length)
{
    int i, temp;
    for (i = 0; i < length / 2; i++)
    {
        temp = array[i];
        array[i] = array[length - 1 - i];
        array[length - 1 - i] = temp;
    }
}
int main()
{
    int array[100], i, size;
    printf("Enter the Size Of Array:");
    scanf("%d", &size);
    printf("Enter the element in array:");
    for (i = 0; i < size; i++)

        scanf("%d", &array[i]);

    reverse(array, size);
    printf("Reversing array: ");
    for (i = 0; i < size; i++)
    {
        printf(" %d ", array[i]);
    }
    return 0;
}