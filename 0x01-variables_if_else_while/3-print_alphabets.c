#include <stdio.h>
/**
 * main - print alphabets (lowercase then uppercase)
 * @hello - variable to hold ALPHABETS
 *
 * Return: always 0
 */
int main(void)
{
  char hello;

  for (hello = 'a'; hello <= 'z'; hello++)
    {
      putchar(hello);
    }
  for (hello = 'A'; hello <= 'Z'; hello++)
    {
      putchar(hello);
    }
  putchar(10);
  return (0);
}
