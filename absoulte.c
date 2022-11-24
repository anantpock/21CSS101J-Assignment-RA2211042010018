/*absoulte value*/
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    printf("enter no.");
    int a;
    scanf("%d",&a);
    if(a>0)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",(-a));
    }
}
/*output:
enter no.-7
7
 */
