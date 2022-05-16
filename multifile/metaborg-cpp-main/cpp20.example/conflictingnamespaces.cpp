namespace a {
  int foo;
  int bar;
}

namespace b {
  namespace a {  // namespace b::a, doesn't inherit a
    int foo;
  }
  
  int test() {
//    a::bar;  // bar is not be part of namespace b::a
    return a::foo;  // Refers to b::a::foo
  }
}