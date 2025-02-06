#include <stdio.h>


int main() {
    unsigned int number;
    int count=0;
    unsigned int m =1 << (sizeof(unsigned int)*8 -1);
    scanf("%d",&number);
    while((number & m)==0 && m !=0){
        count++;
        m>>=1;
    }
    printf("%d",count);
    return 0;
}