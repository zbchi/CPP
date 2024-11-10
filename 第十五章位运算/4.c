#include <stdio.h>

int check_bit(int value, int position) {
    return (value & (1 << position)) ? 1 : 0;
}

int main() {
    int value = 5;      // 示例值 5
    int position = 2;   // 检查第 2 位

    printf("Bit at position %d is: %d\n", position, check_bit(value, position));
    return 0;
}