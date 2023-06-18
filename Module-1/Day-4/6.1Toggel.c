#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter the string:");
    scanf("%s", str);
    // fgets(str,100,stdin);
    // gets(str);
    int len = strlen(str);
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        else
        {
            str[i] = str[i] - 32;
        }
    }
    printf("%s", str);
}
