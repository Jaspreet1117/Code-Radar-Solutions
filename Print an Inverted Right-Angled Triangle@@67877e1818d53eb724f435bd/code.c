#include <stdio.h>

void InvertedRightAngledTrain(int n){
    for(int i=0;i<=n;i++){
        for (int j=0;j<=n-i;j++){
            printf("* ");
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