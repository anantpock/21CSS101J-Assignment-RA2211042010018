/*nature of roots for quadratic equation*/
#include<stdio.h>
main()
{
    printf("RA2211042010027\n");
    printf("enter a,b,c of quadratic equation");
    int a,b,c;
    int d;
    scanf(" %d %d %d",&a,&b,&c);
    d=((b*b)-(4*a*c));
    if(d==0)
    {
        printf("root are equal");
    }
    else if(d>0)
    {
        printf("roots are real and distinct");
    }
    else
    {
        printf("roots are imaginary");
    }
}
