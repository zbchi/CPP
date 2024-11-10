#include <stdio.h>

int count_set_bits(int value) {
    int count = 0;
    while (value) {
        count += value & 1;
        value >>= 1;
    }
    return count;
}

int main() {
    int value = 30; // 示例值 30
    printf("Number of set bits: %d\n", count_set_bits(value));
    return 0;
}