#include <stdio.h>


int main() {
    int number;
    scanf("%d",&number);
    for(int i=0;i >= 0;i--){
        printf("%d",(number >> i)& 1);
    }
    return 0;
}