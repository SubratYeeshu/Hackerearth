#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("0");
    }
    else if (n == 1)
    {
        printf("1");
    }
    else if (n == 2)
    {
        printf("1");
    }
    else if (n == 3)
    {
        printf("1");
    }
    else if (n == 4)
    {
        printf("1");
    }
    else if (n == 5)
    {
        printf("1");
    }
    else if (n > 5)
    {
        int remainder;
        remainder = n % 5;
        printf("%d", (((n - remainder) / 5) + remainder));
    }
    return 0;
}