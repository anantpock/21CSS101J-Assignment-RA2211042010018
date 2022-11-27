
#include <stdio.h>

int main()
{
    printf("enter three numbers");
    int a,b,c;
    scanf("%d %d %d",&b,&a,&c);
    if((a*a+b*b)==c*c||(b*b+c*c)==a*a||(c*c+a*a)==b*b)
    {
        printf("phythagoraean triplet");
    }
    else
    {
        printf("not a phythagoraean triplet");
    }
}
