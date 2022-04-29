class MyClass {
  private: 
    int x = 5; public :
    int myfunc( )
	{ 
	  return x;
	}
};

int increment(int x, int y)
{
  return 1;
}

int main( )
{
  int x = 5;
  {
  	int y = 6;
    increment(x, 2);
  }
  
}