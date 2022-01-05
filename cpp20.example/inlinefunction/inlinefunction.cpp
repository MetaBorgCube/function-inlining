int increment(int x) {
    x = x + 1;
    return x;
}

int main() {
    for (int y = 0; increment(y) < 5; y+=1)
    	y;
}

