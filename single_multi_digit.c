/*single digit number or multidigit number*/
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    printf("enter number");
    int a;
    scanf("%d",&a);
    int b=a/10;
    if(b!=0)
    {
        printf("multidigit number");
    }
    else
    {
        
        printf("singledigit number");
    }
}
/*output:
enter number8
singledigit number
 */
