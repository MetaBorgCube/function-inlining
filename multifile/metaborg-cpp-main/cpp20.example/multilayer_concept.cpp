template <class T>
concept Layer1 = requires(T x) { *x; };

template <class T, class U>
concept Layer2 = Layer1<T> && Layer1<U>;

template <class T, class V>
requires Layer2<T, V>
void do_nothing() {

}

int main() {
  do_nothing<int*, char*>();
}