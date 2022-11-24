/*newton laws*/
#include<stdio.h>
main()
{
    printf("1.v=u+at\n 2.s=ut+1/2at^2\n 3.a=(v^2-u^2)/2s\n");
    int menu;
    scanf(" %d",&menu);
    switch(menu)
    {
        case 1:
        {
            printf("enter u,a,t\n");
            float v,u,a,t;
            scanf(" %f %f %f",&u,&a,&t);
            v=u+a*t;
            printf("v= %f\n", v);
            break;
        }
        case 2:
        {
            printf("enter u,a,t\n");
            float s,u,a,t;
            scanf(" %f %f %f ",&u,&a,&t);
            s=(u*t)+(1/2*a*t*t);
            printf("s= %f\n",s);
            break;
        }
        default:
        {
            printf("enter v,u,s\n");
            float a,v,u,s;
            scanf(" %f %f %f",&v,&u,&s);
            a=((v*v)-(u*u))/(2*s);
            printf("a= %f",a);
            break;
        }
    }
}
