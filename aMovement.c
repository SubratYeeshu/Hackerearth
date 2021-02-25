#include <stdio.h>

int main()

{

    int n, count;

    scanf("%d", &n);

    if (n % 5 == 0)

    {

        count = n / 5;
    }

    else
    {

        count = (n / 5) + 1;
    }

    printf("%d", count);
}