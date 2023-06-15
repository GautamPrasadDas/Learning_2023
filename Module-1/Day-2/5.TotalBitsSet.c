#include <stdio.h>

int setbits(int array[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        int num = array[i];
        while (num > 0)
        {
            count += num & 1; // here num & 1 are the bitwise  AND operator
            num >>= 1;        // it move to next bit
        }
    }
    return count;
}
int main()
{
    int array[3] = {0x1, 0xF4, 0x10001};
    int size = sizeof(array) / sizeof(array[0]);
    int result = setbits(array, size);
    printf("Total number of set bits: %d\n", result);
}