#include <stdio.h>

int main()
{
    printf("enter a number");
    int a,b,r=0;
    scanf(" %d",&a);
    b=a;
    for(int c=b%10;b>0;)
    {
        r=r*10+c;
        b/=10;
        c=b%10;
    }
    printf("reverse of %d= %d",a,r);
}
