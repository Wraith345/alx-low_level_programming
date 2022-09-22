#include "main.h"

void fizz_buzz(void)
{
  for (int a = 1; a <= 100; a++)
  {
    if (a % 15 == 0)
    {
      printf("FizzBuzz");
    }
    else if (a % 3 ==0)
    {
      printf("Fizz");
    }
    else if (a % 5 == 0)
    {
      printf("Buzz");
    }
    else
    {
      printf("%d", a);
    }
  }
  printf("\n");
}
