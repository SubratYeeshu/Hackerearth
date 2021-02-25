#include <stdio.h>
int main() 
{
    int red,green,blue,i;
    scanf("%d",&i);
    while(i--)
    {
        scanf("%d %d %d",&red,&green,&blue);
        if(red>=0 && red<=255 && green>=0 && green<=255 && blue>=0 && blue<=255)
        {
            printf("#%.2x%.2x%.2x\n",red,green,blue);
        }
        else
        {
            printf("INVALID\n");
        }
    }
    return 0;
}