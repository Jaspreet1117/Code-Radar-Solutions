#include <stdio.h>

void InvertedRightAngledTrain(int n){
    for(int i=n;i>=1;i--){
        for (int j=i;j>=1;j--){
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
    return 0;
}