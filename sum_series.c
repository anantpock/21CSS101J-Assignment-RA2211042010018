
#include<stdio.h>
main()
{  
    int n,sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(int a=0;a>n;a++)
    {
        sum+=a*a;
    }
    printf("sum=%d",sum);
}


