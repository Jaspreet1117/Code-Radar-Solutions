#include <stdio.h>
int main(){
    int number,printable=1,second=0;
    scanf("%d",&number);
    for (int i=1;i<=number;i++){
        if (i%2!=0){
            for (int j=1;j<=i;j++){
                printf("%d",printable);
                printable=0;
            }
        else{
            printf("%d",second);
            second=1;
        }
        }
        printf("\n");
        printable=1;
        second=0;

    }
}