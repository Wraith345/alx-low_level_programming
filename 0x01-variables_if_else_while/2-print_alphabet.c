#include <stdio.h>
/**
 * main - print alphabets(lowercase)
 * @hello - variable to hold alphabets
 * Return: 0
 */
int main(void)
{
  char hello;

  for (hello = 'a'; hello <= 'z'; hello++)
  {
    putchar(hello);
  }
  putchar(10);
  return (0);
}
