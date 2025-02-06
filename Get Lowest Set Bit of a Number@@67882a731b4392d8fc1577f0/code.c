#include <stdio.h>


int main() {
    unsigned int number,low;
    scanf("%u",&number);
    low=number & -number;
    printf("%u",low);
    return 0;
}