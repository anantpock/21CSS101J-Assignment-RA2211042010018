/*right angle triangle*/
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    printf("enter three numbers");
    int a,b,c;
    scanf("%d %d %d",&b,&a,&c);
    if((a*a+b*b)==c*c||(b*b+c*c)==a*a||(c*c+a*a)==b*b)
    {
        printf("right angle triangle");
    }
    else
    {
        printf("not a right angle triangle");
    }
}
/*output:
enter three numbers3
4
5
right angle triangle
 */
