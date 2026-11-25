#include <stdio.h>
#include <stdint.h>

int main() {
    int8_t a = 10;
    int16_t b = 1000;
    int32_t c = 100000;
    int64_t d = 1000000;

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%lld\n", (long long)d);

    return 0;
}