/*duck number*/
#include <stdio.h>

main()
{
    printf("RA2211042010027\n");
    printf("enter a number");
    int a=0,b;
    scanf(" %d",&b);
    while(b>0)
    {
        int d=b%10;
        if(d==0)
        {
            a++;
        }
    }
    if(a>0)
    {
        printf("duck number");
    }
    else
    {
        printf("not a duck number");
    }
}
/*output:
enter a number909
duck number
*/
