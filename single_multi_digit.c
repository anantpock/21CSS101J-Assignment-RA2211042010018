
#include <stdio.h>

int main()
{
    printf("enter number");
    int a;
    scanf("%d",&a);
    int b=a/10;
    if(b!=0)
    {
        printf("multidigit number");
    }
    else
    {
        
        printf("singledigit number");
    }
}
