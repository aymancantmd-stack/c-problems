#include <stdio.h>

void display() {
    static int count = 0;

    count++;

    printf("%d\n", count);
}

int main() {
    display();
    display();
    display();

    return 0;
}