#include <stdio.h>

int sumAlternate(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i += 2)
    {
        sum += array[i];
    }
    return sum;
}
int main()
{
    int array[] = {10, 20, 30, 40, 50};
    int size = sizeof(array) / sizeof(array[0]);
    int result = sumAlternate(array, size);
    printf("Sum of alternate elements: %d\n", result);
    return 0;
}
