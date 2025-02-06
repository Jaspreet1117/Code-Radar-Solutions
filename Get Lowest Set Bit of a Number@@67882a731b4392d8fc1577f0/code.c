#include <stdio.h>


int main() {
     int number,low;
    scanf("%d",&number);
    low= number & -number;
    printf("%d",low);
    return 0;
}