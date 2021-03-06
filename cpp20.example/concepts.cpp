template <class T, class U>
concept AConcept = requires (T x, U y) { x + x; y.value + 1; };

template <class T, class U, class V>
requires AConcept<U, V>
U get_a_value(V valuehaver) {
  return valuehaver.value;
}

struct AType { int value; };

int main() {
  struct AType aVariable;
  aVariable.value = 5000;
  
  return get_a_value<char*, int, AType>(aVariable);
}