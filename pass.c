#include <stdio.h>
int main()
{
    int m,p;
    printf("Enter your marks : ");
    scanf("%d",&m);
    printf("Enter passing marks : ");
    scanf("%d",&p);
    if (m>=p)
    {
        printf("PASS");
    }
    else
    {
        printf("FAIL");
    }
    return 0;
}