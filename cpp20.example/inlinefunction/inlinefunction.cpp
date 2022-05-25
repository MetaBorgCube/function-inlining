class MyClass {
  private:
    int x = 2;
  public:
    int get_x() {
        return x;
    }
};

int main() {
    MyClass bar;
    bar.get_x();
}

