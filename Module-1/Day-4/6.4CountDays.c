#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char str1[10];
    printf("Enter a string in (DD/MM/YYYY):");
    scanf("%s", str1);
    int DD, MM, YYYY, i;
    sscanf(str1, "%d/%d/%d", &DD, &MM, &YYYY);
    printf("\n %d %d %d", DD, MM, YYYY);
    int sum = 0, totalDays = 0;
    for (i = 0; i < MM - 1; i++)
    {
        if (YYYY % 4 != 0 && YYYY % 100 != 0)
        {
            sum += arr[i];
        }
        else
        {
            arr[1] = 29;
            sum += arr[i];
        }
    }
    totalDays = sum + DD;
    printf("\nThe number of days elapsed is :%d", totalDays);
    return 0;
}