class MyClass {
	private: int x = 5;
	public: int myfunc() { 
		return x;
	}
};

int increment(int x) {
    return 1;
}

int main() {
    int x = 5;
    increment(2);
    
    MyClass test;
    test.myfunc();
    
    x = 2;
}
