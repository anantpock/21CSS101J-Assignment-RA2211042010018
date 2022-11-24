/*polynomial value Z=3x^3-2x^2-x-12*/
#include <stdio.h>

main()
{
    int x;
    printf("enter value of x");
    scanf("%d",&x);
    int Z=3*x*x*x-2*x*x-x-12;
    printf("Value of Z=%d",Z);
}
