#include "main.h"

void print_line(int n)
{
  int count = 0;

  while (count < n)
  {
    putchar('_');
    count++;
  }
  putchar(10);
  return (0);
}
