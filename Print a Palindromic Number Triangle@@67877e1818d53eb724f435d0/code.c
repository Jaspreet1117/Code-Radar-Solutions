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
        for(int m=2;m<=i;m++){
            printf("%d",print);
            print=print-2;
        }
        printf("\n");
        print+=1;
    }
    
    return 0;
}