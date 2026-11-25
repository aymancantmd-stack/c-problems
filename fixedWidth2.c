#include <stdio.h>
#include <stdint.h>

int main() {
    uint8_t a = 255;
    uint16_t b = 1000;
    uint32_t c = 100000;

    printf("%u\n", (unsigned int)a);
    printf("%u\n", (unsigned int)b);
    printf("%u\n", (unsigned int)c);

    return 0;
}