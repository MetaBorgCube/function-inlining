int x = 5;

int foo( )
{
  int y = x;
  int x_0 = 2;
  {
    int y = x;
    int x_0 = 2;
    {
      foo( );
    }
    x_0 + y;
  }
  return x_0 + y;
}