int begin(char x) { return 1; }
int end(char x) { return 25; }

class Test {
public:
  int begin() {
    return 42;
  }
  
  int end() {
    return 56;
  }
};

int main() {
  char aNormalType;
  Test aClass;
  for (int x : aNormalType) {  // Uses int begin(char x) and int end(char x)
    x == 2;
  }
  for (int y : aClass) {  // Uses int Test::begin() and Test::end()
    y == 3;
  }
  for (char z : "Hello world") { // Works by default for arrays
    z == 'h';
  }
}