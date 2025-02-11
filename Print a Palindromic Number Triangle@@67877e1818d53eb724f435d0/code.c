#include <stdio.h>


int main() {
    int number;scanf("%d",&number);
    for(int i=1;i<=number;i++){
        for (int j=2;j<i*2;j=j+2){
            printf(" %d",11*i);
        }
        printf("\n");
    }
    return 0;
}