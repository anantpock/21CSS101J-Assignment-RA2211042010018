/*sum of series s=(1*2)+(2*3)+...(n*(n-1))*/
#include<stdio.h>
main()
{  
    printf("RA2211042010027\n");
    int n,sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(int a=1;a<n;a++)
    {
        sum+=(a*(a+1));
    }
    printf("sum=%d",sum);
}
/*output:
Enter the number3
sum=8
*/
