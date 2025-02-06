#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
     unsigned int number,low;
    scanf("%u",&number);
    low=number & -number;
    pritnf("%u",low);
    return 0;
}