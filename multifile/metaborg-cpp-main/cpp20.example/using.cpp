namespace a {
  class A {
  public:
    int x, y, z;
  };
  char* alpha;
}

namespace b {
  using a::A;
  void f() {
    A object;
    object.x + object.y;
  }
}

namespace c {
  using namespace a;
  void f() {
    A object;
  }
}

void g() {
  a::A object1;
  b::A object2;  // Allowed due to using a::A
  c::A object3;  // Allowed due to using namespace a
  a::alpha;
//  b::alpha;  // Not allowed, since there is no using a::alpha in namespace b
  c::alpha;  // Allowed due to using namespace a
}