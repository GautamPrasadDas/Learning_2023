// Covert String as Integer
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%s", str);
    int i = 0, res = 0;
    while (str[i] != '\0')
    {
        res = res * 10 + (str[i] - 48);
        i++;
    }
    printf("%d", res);
    return 0;
}
