namespace outer {
  int i;
  namespace inner {
    void f() { i += 1; }
    int i;
    void g() { i += 1; }
  }
}