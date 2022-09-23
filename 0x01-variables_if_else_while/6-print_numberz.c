#include <stdio.h>
/**
 * main - print single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
  for (char s = '0'; s <= '9'; s++)
    {
      putchar(s);
    }
  putchar(10);
  return (0);
}
