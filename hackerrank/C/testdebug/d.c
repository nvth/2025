#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 10;
    int sum = add(x, y);
    printf("Sum: %d\n", sum);
    return 0;
}