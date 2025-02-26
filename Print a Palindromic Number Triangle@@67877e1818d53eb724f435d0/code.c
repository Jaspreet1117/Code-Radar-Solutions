//print a palidromic number triangle
#include <stdio.h>


int main() {
    int number,print=1;
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        for(int j=number-i;j>0;j--){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        for(int m=i-1;m>=1;m--){
            printf("%d",m);
        }
        printf("\n");
    }
    
    return 0;
}