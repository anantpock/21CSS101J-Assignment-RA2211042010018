/*quadrant finder*/
#include <stdio.h>

int main()
{
    printf("enter a angle ");
    int a;
    scanf("%d",&a);
    if(a>360)
    {
        a%=360;
    }
    if(a>=0&&a<=90)
    {
        printf("1st Quadrant");
    }
    else if(a>90&&a<=180)
    {
        printf("2nd Quadrant");
    }
    else if(a>180&&a<=270)
    {
        printf("3rd Quadrant");
    }
    else
    {
        printf("4th Quadrant");
    }
}
/*output:
enter a angle 1081
1st Quadrant*/
