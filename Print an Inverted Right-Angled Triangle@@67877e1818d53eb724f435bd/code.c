#include <stdio.h>

void InvertedRightAngledTrain(int n){
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
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