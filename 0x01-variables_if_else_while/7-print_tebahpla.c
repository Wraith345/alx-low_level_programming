#include <stdio.h>
/**
 * main - print alphabets in reverse
 * @s: holds each alphabet to be printed
 * Return: 0
 */
int main(void)
{
  char s;

  for (s = 'z'; s >= 'a'; s--)
    {
      putchar(s);
    }
  putchar(10);
  return (0);
}
