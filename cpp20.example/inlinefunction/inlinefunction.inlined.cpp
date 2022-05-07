int foo(int x)
{
  x = x * 2;
  if(x < 10)
    {
      int x = x;
      x = x * 2;
      if(x < 10)
        {
          foo(x);
          x = x - 1;
        }
      x;
      x = x - 1;
    }
  return x;
}

int main( )
{
  int x = 5;
  {
    foo(2);
    x = 6;
  }
}