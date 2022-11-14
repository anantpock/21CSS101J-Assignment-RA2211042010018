#include <stdio.h>
int main() 
{
  printf("Enter two numbers!:");
  int a, b, i, j, num1, num2;
  scanf("%d%d", &a, &b);
  if (a < b) {
    for (num1 = (a + 1); num1 < b; num1++) {
      for (i = 2; i < num1; i++) {
        if ((num1 % i) == 0)
          break;
        else
          continue;
      }
      if ((num1 % i) == 0)
        continue;
      else {
        printf("%d between %d and %d is a prime number!\n", num1, a, b);
        continue;
      }
    }
  } else if (b < a) {
    for (num2 = (b + 1); num2 < a; num2++) {
      for (j = 2; j < num2; j++) {
        if ((num2 % j) == 0)
          break;
        else
          continue;
      }
      if ((num2 % j) == 0)
        continue;
      else {
        printf("%d between %d and %d is a prime number!\n", num2, b, a);
        continue;
      }
    }
  }
  return 0;
}
