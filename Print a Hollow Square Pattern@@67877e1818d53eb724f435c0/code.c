#include <stdio.h>


int main() {
    int number;
    scanf("%d",&number);
    for (int i=1;i<=number;i++){
        for (int j=1;j<=number;j++){
            if (i==1 ||j==1 || i==number || j==number){
                printf("*");
            }
            else{
                printf(" ");
            }} 
            printf("\n");
    }
    return 0;
}