/*leap year*/
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    printf("enter year");
    int a;
    scanf("%d",&a);
    if(a%4==0)
    {
        printf("leap year");
    }
    else
    {
        printf("not a leap year");
    }
}
/*output:
eenter year2004
leap year
 */
