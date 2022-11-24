/*lcm*/
#include<stdio.h>
main()
{  
    int a,b,c;
    printf("Enter two number");
    scanf("%d %d",&a,&b);
    c=a*b;
    for(int d=1;d<c;d++)
    {
        if(d%a==0&&d%b==0)
        {
            c=d;
        }
    }
    printf("lcm=%d",c);
}
/*output:
Enter two number15
10
lcm=30
*/
