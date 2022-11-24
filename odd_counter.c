/* odd digits counter*/
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    printf("enter a number");
    int a,c=0;
    scanf("%d",&a);
    int b=a;
    while(b>0)
    {
        int d=b%10;
        if(d%2!=0)
        {
            c++;
        }
        b/=10;
    }
    printf("no.of odd number=%d",c);
}
/*output:
enter a number56789
no.of odd number=3
 */
