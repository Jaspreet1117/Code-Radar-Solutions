#include <stdio.h>

int main() {
    unsigned int number = 25;
    unsigned int msb = 0;
    unsigned int temp = number;

    while (temp > 1) {
        temp >>= 1; 
        msb++;
    }

    unsigned int msb_value = 1 << msb;
    printf("%u", msb_value);

    return 0;
}
