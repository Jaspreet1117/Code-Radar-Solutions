//print a palidromic number triangle
#include <stdio.h>


int main() {
    int number;
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        for(int j=number-i;j>0;j--){
            printf(" ");
        }
        for(int k=1;k<=4;k++){
            printf("%d",k);
        }
        for(int m=2;m<number-1;m++){
            printf("%d",m);
        }
        printf("\n");
    }
    
    return 0;
}