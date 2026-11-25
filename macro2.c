#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int a = 10, b = 20;

    printf("%d", MAX(a, b));

    return 0;
}