#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int number,low;
    scanf("%d",&number);
    low=number & -number;
    pritnf("%d",low);
    return 0;
}