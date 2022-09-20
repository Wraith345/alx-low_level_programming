#include <stdio.h>
/**
 * main - print alphabets(lowercase)
 * Return - 0
 */
int main(void)
{
  char hello;
  
  for (hello = 'a'; hello <= 'z'; hello++)
  {
  putchar(hello);
  }
  putchar(10);
}
