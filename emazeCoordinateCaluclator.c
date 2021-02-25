#include <stdio.h>

int main()
{
    int x = 0, y = 0;
    char str[200];
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'L')
        {
            x = x - 1;
        }
        else if (str[i] == 'R')
        {
            x = x + 1;
        }
        else if (str[i] == 'U')
        {
            y = y + 1;
        }
        else if (str[i] == 'D')
        {
            y = y - 1;
        }
    }
    printf("%d %d", x, y);
    return 0;
}