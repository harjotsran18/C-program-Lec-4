#include <stdio.h>
int main()
{
    int s,l;
    printf("ENTER YOUR SPEED : ");
    scanf("%d",&s);
    printf("ENTER SPEED LIMIT : ");
    scanf("%d",&l);
    if (s<=l)
    {
        printf("OK");    
    }
    else
    {
        printf("OVER");
    }
    return 0;
}