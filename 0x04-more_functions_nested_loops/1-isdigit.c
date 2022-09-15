int _isdigit(int c);

int _isdigit(int c)
{
  if (c > 47)
  {
    if (c < 58)
      {
      result = 1;
    }
    else
      result = 0;
  }
  else
  {
    result = 0;
  }
  return result;
}
