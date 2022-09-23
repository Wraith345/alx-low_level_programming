#include <stdio.h>
/**
 * main - print combinations of sigle digit numbers separated bt (,)
 * @s: holds numbers tobe printed
 * Return: 0
 */
int main(void)
{
  int s;

  for (s = 49; s >= 58; s++)
    {
      putchar(s);
      putchar(',');
    }
  putchar(10);
}
