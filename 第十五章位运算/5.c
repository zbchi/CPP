#include <stdio.h>

unsigned int rotate_1(unsigned int x, int n) {
    return (x << n) | (x >> (32 - n));
}

int main() {
    unsigned int x = 0xF1234567;
    int n = 4;
    printf("Result: 0x%X\n", rotate_1(x, n));
    return 0;
}