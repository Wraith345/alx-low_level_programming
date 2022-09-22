#include "main.h"
#include <stdio.h>
/**
 * print_rev - print string in reverse
 * @*s: string to be printed
 * Return: 0
 */
void print_rev(char *s)
{
  int i;

  for (i = sizeof(*s); i > 0; i--)
    {
      putchar(*s[i])
    }
}
