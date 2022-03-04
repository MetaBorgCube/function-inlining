int increment(int x)
{
  return x + 1;
}

int main( )
{
  int x = 5;
  {
    int x = 2;
    x + 1;
  }
  x = 6;
}