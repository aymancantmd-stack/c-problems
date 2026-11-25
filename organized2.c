#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    printf("Addition: %d\n", add(20, 10));
    printf("Subtraction: %d", subtract(20, 10));

    return 0;
}