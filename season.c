/*find season*/
#include <stdio.h>

main()
{
    printf("enter month number");
    int a;
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        case 2:
        case 3:
        case 4:
         printf("summer");
         break;
        case 5:
        case 6:
        case 7:
        case 8:
         printf("rainy");
         break;
        default:
         printf("winter");
         break;
    }
}

