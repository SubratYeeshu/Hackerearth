#include <stdio.h>

int main()
{
    int n, temp = 0;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'H' && s[i + 1] == 'H')

        {
            temp = 1;
            break;
        }
        else if (s[i] == '.')
        {
            s[i] = 'B';
        }
    }
    if (temp==0)
    {
        printf("YES\n");
        printf("%s", s);
    }
    else
        printf("No");

    return 0;
}