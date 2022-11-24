/*find sum and product of two array*/
#include <stdio.h>

main()
{
  int A[5],B[5],C[5],D[5];
  printf("enter 5 elements of A\n");
  for(int a=0;a<5;a++)
  {
      scanf(" %d", &A[a]);
  }
   printf("enter 5 elements of B\n");
  for(int a=0;a<5;a++)
  {
      scanf(" %d", &B[a]);
  }
  for (int a=0;a<5;a++)
  {
      C[a]=A[a]+B[a];
      D[a]=A[a]*B[a];
  }
  for (int a=0;a<5;a++)
  {
      printf(" %d %d\n",C[a],D[a]);
  }
}
