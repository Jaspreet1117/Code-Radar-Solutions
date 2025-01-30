#include <stdio.h>



int main() {
    int a,b;
    scanf("%d%d",&b,&a);
    a=b;
    b=a;
    printf("%d %d",a,b);
    return 0;
}