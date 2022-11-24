/*find if given number is prime or not*/
#include <stdio.h>

main()
{
  printf("RA2211042010027\n");
  int a, f, c = 0;
  printf("Enter a number");
  scanf("%d", &a);

  //logic
  for (f = 1; f <= a; f++)
  {
      if (a % f == 0) 
      {
         c++;
      }
  }

  if (c == 2) 
  {
        printf("n is a Prime number");
  }
  else 
  {
         printf("n is Composite number");
  }
}
