
#include<stdio.h>
main()
{  
    int n,sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(int a=1;a<n;a++)
    {
        sum+=(a*(a+1));
    }
    printf("sum=%d",sum);
}

