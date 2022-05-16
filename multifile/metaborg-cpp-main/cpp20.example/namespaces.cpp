namespace a {
  int x;
}

namespace b {
  int x;
  namespace c {
    int y;
    void function1() {
      y;  // Good, already defined
//      z;  // Bad, not yet defined
    }
  }
}

namespace b::c {
  int z;
  void function2() {
    y;  // Good, defined in a previous b::c namespace definition
    z;  // Good, defined in this namespace definition
  }
}

int main() {
  // Good, all are defined in their respective namespaces
  a::x;
  b::x;
  b::c::y;
  b::c::z;
  
  // Bad, not defined in the global scope
//  x;
//  y;
//  z;
}