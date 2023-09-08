int main()
{
  int a;
  int b;
  int c;
  for  (a = 0; a <= 8; a++)
  {
    for (b = a + 1; b <= 9; b++)
    {
      for (int c = b +1; c <= 9; c++)
      {
      putchar(a + '0');
      putchar(b + '0');
      putchar(c+ '0');

      if (!(i == 7 && j == 8 && k==9))
      {
        putchar(',');
        putchar(' ');
      }
      }
    }
    
  }

  putchar('\n');

  return (0);
}
