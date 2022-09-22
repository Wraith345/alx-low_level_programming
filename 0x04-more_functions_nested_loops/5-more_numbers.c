#include "main.h"

void more_numbers(void)
{
  int count = 0;

  while (count < 10)
  {
    for (int num = 0; num < 15; num++)
    {
      printf("%d", num);
    }
    printf("\n");
    count++;
  }
}
