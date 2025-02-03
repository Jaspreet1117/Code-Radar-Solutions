#include <stdio.h>
int main(){
    int number,printable=1,second=0;
    scanf("%d",&number);
    for (int i=1;i<=number;i++)
    {
        for (int j=1;j<=i;j++){
        if (i%2!=0){
            printf("%d ",printable);
            printable=0;
            }
        else{
            printf("%d ",second);
            second=1;
            }}
    
        printf("\n");
        printable=1;
        second=0;

    }
}