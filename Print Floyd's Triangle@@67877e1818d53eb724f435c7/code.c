#include <stdio.h>



int main() {
    int number,a=1;
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}