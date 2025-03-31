#include <stdio.h>

void InvertedRightAngledTrain(int n){
    for(int i=n;i>0;i--){
        for (int j=0;j<n-i;j++){
            printf("*");
        }
        printf("\n");
    }
    return;
}
int main(){
    int number;
    scanf("%d",&number);
    InvertedRightAngledTrain(number);
    return;
}