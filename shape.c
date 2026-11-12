#include <stdio.h>
int main()
{
    int L,B;
    printf("Enter Length : ");
    scanf("%d",&L);
    printf("Enter breadth : ");
    scanf("%d",&B);
    if (L==B)
    {
        printf("SQUARE");
    }
    else
    {
        printf("RECTANGLE");
    }
    return 0;
}