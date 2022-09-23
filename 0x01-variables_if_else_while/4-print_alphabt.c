#include <stdio.h>
/**
 * main - print alphabets (lowercase !(q && e)
 * @hello - variable to hold ALPHABETS
 *
 * Return: always 0
 */
int main(void)
{
  char hello;

  for (hello = 'a'; hello <= 'z'; hello++)
    {
      if (hello == 'e')
      {
	continue;
      }
      else if (hello == 'q')
      {
	continue;
      }
      else
      {
      putchar(hello);
      }
    }
  putchar(10);
  return (0);
}
