class MyClass {
  private: 
    int x = 5; public :
    int myfunc( )
	{ 
	  return x;
	}
};

int increment(int x)
{
  return x;
}

void test() { return; }

int main( )
{
  int x = 5;
  {
    increment(x);
    x = 6;
  }
}