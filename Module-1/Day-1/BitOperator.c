#include <stdio.h>

int bit_operation(int num, int oper_type)
{
    switch (oper_type)
    {
    case 1: // Set 1st bit
        num |= 1;
        break;
    case 2: // Clear 31st bit
        num &= ~(1 << 31);
        break;
    case 3: // Toggle 16th bit
        num ^= 1 << 16;
        break;
    default:
        printf("Invalid operation type\n");
    }
    return num;
}
int main()
{
    int num, oper_type;
    printf("Enter an integer (32 bits): ");
    scanf("%d", &num);
    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);
    int result = bit_operation(num, oper_type);
    printf("Result: %d\n", result);
    return 0;
}