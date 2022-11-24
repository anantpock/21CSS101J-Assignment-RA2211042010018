#include <stdio.h>
void main()
{
  char ch;
  printf("upper case charecter : ",ch);
  scanf("%c", &ch);
  ch = ch +32;
  printf("lowercase : %c\n",ch);
}
