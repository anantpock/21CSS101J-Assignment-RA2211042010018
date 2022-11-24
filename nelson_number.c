/*nelson number*/
#include<stdio.h>
main()
{  
    printf("RA2211042010027\n");
    int n,d=0;  
    printf("Enter the number");
    scanf("%d",&n);
    int a=n,c=n%10;
    while(a>0)
    {
        int e=a%10;
        if(e!=c)
        {
            d++;
        }
        a/=10;
    }
      
    if(d==0)
    {
        printf("nelson number");
    }
    else
    {
        printf(" not nelson number");
    }
}
/*output:
Enter the number888
nelson number
*/
