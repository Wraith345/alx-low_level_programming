#include <stdlib.h>

#include <time.h>
#include <stdio.h>
/**
 * main - outputs whether a random number is positive, negative or zero
 * @n: the random number to be checked
 *
 * Return: num is positive, negative or zero depending on function output
 */

int main(void)
{
  int n;

  srand(time(0));

  n = rand() - RAND_MAX / 2;

  if (n != 0)
    {
      if (n > 0)
	{
	  printf("%d is positive\n", n);
	}
      else
	{
	  printf("%d is negative\n", n);
	}
    }
  else
    {
      printf("%d is zero\n", n);
    }
  return (0);
}
