#include <stdio.h>
/**
 * main - print alphabets(lowercase)
 * Return: always 0
 */
int main(void)
{
  int hello;
  
  for (hello = 97 ; hello <= 122 ; hello++)
  {
    putchar(hello);
  }
  putchar(10);
  return (0);
}
