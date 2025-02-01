#include <stdio.h>

int main() {
    int number,prime=0;
    scanf("%d",&number);
    for (int i=2;i<number-1;i++){
        if (number%i==0){
            prime=1;
            break;
        }
        else{
            prime=0;
        }
    }
    prime==1?printf("Not Prime"):printf("Prime");
    return 0;
}