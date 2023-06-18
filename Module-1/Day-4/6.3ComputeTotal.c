#include <stdio.h>
int ComputeSecond(int hours, int minutes, int seconds)
{
    int total = hours * 3600 + minutes * 60 + seconds;
    return total;
}
int main()
{
    int hours, minutes, seconds;
    printf("Enter the hours:");
    scanf("%d", &hours);
    printf("Enter the minutes:");
    scanf("%d", &minutes);
    printf("Enter the seconds:");
    scanf("%d", &seconds);
    int total = ComputeSecond(hours, minutes, seconds);
    printf("Total Seconds:%d\n", total);
    return 0;
}