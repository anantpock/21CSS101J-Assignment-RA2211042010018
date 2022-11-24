/*profit loss*/
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    printf("enter sales price and cost price");
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        int p=a-b;
        printf("profit=%d",p);
    }
    else
    {
        int l=b-a;
        printf("loss=%d",l);
    }
}
/*output:
enter sales price and cost price567
675
loss=108
 */
