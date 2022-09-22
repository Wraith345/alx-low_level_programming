#include <stdio.h>
/**
 * main - print numbers
 * Return: always 0
 */
int main(void)
{
  for (char hello = '0'; hello <= '9'; hello++)
  {
    putchar(hello);
  }
  putchar(10);
  return (0);
}
