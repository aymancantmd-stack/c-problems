#include <stdio.h>

int main() {
    int a = 10, b = 20;

    printf("%d\n", a < 20 && b > 10);
    printf("%d\n", a > 20 || b > 10);
    printf("%d\n", !(a > b));

    return 0;
}