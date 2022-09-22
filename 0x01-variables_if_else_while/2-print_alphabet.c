#include <stdio.h>
/**
 * main - print alphabets(lowercase)
 * Return: always 0
 */
int main(void)
{
  for (char hello = 'a'; hello <= 'z'; hello++)
  {
    putchar(hello);
  }
  putchar(10);
  return (0);
}
