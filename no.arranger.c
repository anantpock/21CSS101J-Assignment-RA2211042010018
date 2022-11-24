/* no. arranger*/
#include <stdio.h>

int main()
{
    printf("enter a3number");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("largest element =%d\n",a);
        a=0;
        if(b>c)
        {
            printf("middle element= %d\n",b);
            b=0;
        }
        else
        {
            printf("middle element= %d\n",c);
            c=0;
        }
    }
    if(b>a&&b>c)
    {
        printf("largest element =%d\n",b);
        b=0;
        if(a>c)
        {
            printf("middle element= %d\n",a);
            a=0;
        }
        else
        {
            printf("middle element= %d\n",c);
            c=0;
        }
    }
    if(c>a&&c>b)
    {
        printf("largest element =%d\n",c);
        c=0;
        if(b>a)
        {
            printf("middle element= %d\n",b);
            b=0;
        }
        else
        {
            printf("middle element= %d\n",a);
            a=0;
        }
    }
    if(a!=0)
    {
        printf("smallest element= %d\n",a);
    }
     if(b!=0)
    {
        printf("smallest element= %d\n",b);
    }
     if(c!=0)
    {
        printf("smallest element= %d\n",c);
    }
}
/*output:
enter a3number21   
12
65
largest element =65
middle element= 21
smallest element= 12
 */
