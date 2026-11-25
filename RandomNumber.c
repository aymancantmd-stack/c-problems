#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int number = rand();

    printf("%d", number);

    return 0;
}