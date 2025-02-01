#include <stdio.h>

int main() {
    int number;
    scanf("%d",&number);
    for (int i=2;i<number-1;i++){
        if (number%i==0){
            printf("Not Prime");
        }
        else{
            printf("Prime");
        }
    }
    return 0;
}