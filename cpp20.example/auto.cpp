auto *x = "hello", y, **z = &x;

class Test {
public:
  auto x = "hello";//, y = (char)'h';
  
  auto get_x() {
    return 55;
  }
};

auto* get_string() {
  if (1)
    return "HELLO WORLD";
  else
    return "Goodbye world";
}

int main() {
  Test var;
  var.x;
  var.get_x();
  y = (char)'h';
  get_string();
  for (int z; z < 5; z += 1) {
    z = 0;
  }
  auto lambda = [=] (int x, int y) { return x + y; };
  auto result = lambda(1, 2);
  result;
}