#include <stdio.h>


int main() {
    int number,a=1;
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        for(int j=1;j<=i;i++){
            printf("%c",a+64);
            a++;
        }
        printf("\n");
        a=1;

    }
    return 0;
}