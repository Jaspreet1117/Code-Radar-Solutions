#include <stdio.h>
int main(){
    int number,printable=1,second=0;
    scanf("%d",&number);
    for (int i=1;i<=number;i++)
    {
        for (int j=1;j<=i;j++){
        if (i%2!=0){
            printf("%d ",printable);
            if(printable==1){printable=0;
            }
            else{printable=1;}
            }
        else{
            printf("%d ",second);
            if(second==0){second=1;}
            else{second=0;}
            }}
    
        printf("\n");
        printable=1;
        second=0;

    }
}