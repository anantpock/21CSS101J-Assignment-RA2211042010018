
#include <stdio.h>

main()
{
    printf("enter\n 1.perimeter\n2.area\n3,diagonal");
    int a;
    scanf("%d",&a);
    printf("enter lenght,width");
    int l,w;
    scanf("%d %d",&l,&w);
    switch(a)
    {
        case 1:
         int p=2*(l+w);
         printf("perimeter=%d",p);
         break;
        case 2:
         printf("area=%d"l*w);
         break;
        case 3:
         printf("diagonal=%d",((l*l)+(w*w)));
         break;
        default:
         printf("invalid entry");
         break;
    }
}
