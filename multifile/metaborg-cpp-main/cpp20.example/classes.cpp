class Foo
{
  private:
  
  int y;
  
  public:
//    Foo foo;
//    
//    class Bar {
//      public:
//      static int y;
//    };
//    
//    static int x;
//    int y;
//    
//    static int test(int);

  int test(int x) {
    return this->y;
  }
};

//int Foo::test(int x) {
//  return x; 
//}
//
//int Foo::Bar::y = 3;
//
//int main() {
//  int a = Foo::Bar::y;
//  int b = Foo::x;
////  int c = Foo::y;
//  int d = Foo::test(3);
//  Foo foo;
//  int e = foo.test(3);
//  int f = foo.y;
//}

