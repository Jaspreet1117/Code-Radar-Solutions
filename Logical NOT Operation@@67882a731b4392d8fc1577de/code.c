#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    !(a>0)?printf("True"):printf("False");
    return 0;
}