void print_square(int size);

void print_square(int size)
{
  int count;

  for (count = 0; count < size; count++)
  {
    int width = size;

    if (width > 0)
    {
      putchar('#');
      width--;
    }
    putchar(10);
  }
}