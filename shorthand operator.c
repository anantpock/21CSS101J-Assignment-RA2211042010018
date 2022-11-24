/*use of shorthand operator*/
#include<stdio.h>
main()
{
  printf("RA2211042010027\n");
  int a,b,c;
  printf("enter 3 numbers");
  scanf("%d %d %d",&a,&b,&c);
  a*=b+c;
  printf("value of a=%d\n value of b=%d\n value of c=%d\n",a,b,c);
  c++;
  printf("value of a=%d\n value of b=%d\n value of c=%d\n",a,b,c);
}
