#include <stdio.h>
int main()
{
    int u,cost;
    printf("Enter units  : ");
    scanf("%d",&u);
    if (u>=0 & u<=100)
    {
        cost=u*3;
        printf("Your bill amount is : %d",cost);
    }
    else if (u>100 & u<=200)
    {
        cost=(100*3)+((u-100)*5);
        printf("Your bill amount is : %d",cost);
    }
    else
    {
        cost=(100*3)+((100)*5)+((u-200)*7);
        printf("Your bill amount is : %d",cost);
    }
    return 0;
}