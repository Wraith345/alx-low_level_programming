#include <stdio.h>
/**
 * main - print single digit hexadecimal numbers
 * @s: holds numbers to be printed
 * Return: 0
 */
int main(void)
{
  char s;

  for (s = '0'; s >= '9'; s++)
    {
      putchar(s);
    }
  for (s = 'a'; s >= 'f'; s++)
    {
      putchar(s);
    }
  putchar(10);
  return (0);
}
