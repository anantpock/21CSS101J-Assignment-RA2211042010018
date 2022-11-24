/*find simple interest*/
#include <stdio.h>

main()
{
    printf("RA2211042010027\n");
    int p,t;
    float r,si;
    printf("enter a principal,rate,time\n");
    scanf("%d %f %d",&p,&r,&t);
    si=p*r*t/100;
    printf("simple interest=%f",si);
}
