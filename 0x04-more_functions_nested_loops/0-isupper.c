int isupper(int c);

int isupper(int c)
{
  if (c > 64)
  {
    if (c < 91)
    {
      result = 1;
    }
    else
    {
      result =0;
    }
  }
  else
  {
    result = 0;
  }
  return result
}
