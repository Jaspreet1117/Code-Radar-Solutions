#include <stdio.h>

int main() {
    int number,alpha;
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        for (int j=1;j<=number+1-i;j++){
            printf("%c",alpha+64);
            alpha++;
        }
        printf("\n");
        alpha=1;
    }
    return 0;
}