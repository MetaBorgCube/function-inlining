int increment(int x) {
    return x + 1;
}

int main() {
    int x = 5;
    {
    	increment(2);
    }
    x = 6;
}
