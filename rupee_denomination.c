/*rupee denomination*/
#include <stdio.h>

int main()
{
    printf("enter a rupees");
    int o,t,f,te,fi,h,fh,tt,th,tw;
    scanf("%d",&o);
    tt=o/2000;
    o%=2000;
    fh=o/500;
    o%=500;
    th=o/200;
    o%=200;
    h=o/100;
    o%=100;
    fi=o/50;
    o%=50;
    tw=o/20;
    o%=20;
    te=o/10;
    o%=10;
    f=o/5;
    o%=5;
    t=o/2;
    o%=2;
    printf("no.of two thousands= %d\n no. of five hundred= %d\n no.oftwo hundred= %d\n no. of hundred= %d\n no. of fifty= %d\n no. of twenty= %d\n no.of ten= %d\n no. of five= %d\n no. of two= %d\n no. of ones= %d\n",tt,fh,th,h,fi,tw,te,f,t,o);
}
