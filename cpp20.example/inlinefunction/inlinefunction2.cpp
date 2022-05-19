int x = 5;

int foo() {
  int y = x;
  int x = 2;
  {
    foo();
  }
  return x + y;
}