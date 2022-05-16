template <class T>
concept ByteSize = sizeof(T) == 1;

template <class T>
concept Addable = requires (T x) { x + x; x += x; };

template <int y>
requires y == 5
int work_if_5() {
  return y;
}

template <class T>
requires requires(T x) { x + x; } || Addable<T>
T addition(T a, T b) {
  return a + b;
}
