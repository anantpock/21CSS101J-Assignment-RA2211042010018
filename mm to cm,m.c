
#include <stdio.h>

main()
{
    float mm,cm,mtr;
    printf("enter lenght in millimeter");
    scanf("%f",&mm);
    cm=mm/10;
    mtr=mm/1000;
    printf("%fmm in cm=%f\n ",mm,cm);
    printf("%fmm in meter=%f\n",mm,mtr);
}
