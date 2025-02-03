#include <stdio.h>
int main(){
    int number,printable=1,second=0;
    scanf("%d",&number);
    for (int i=1;i<=number;i++)
    {
        for (int j=1;j<=i;j++){
        if (i%2!=0){
            printf("%d ",printable);
            /*if(printed==1){printed=0;
            }
            else{printed=1;}
            }*/
        else{
            printf("%d ",second);
            if(second==0){second=1;}
            else{second=2;}
            }}
    
        printf("\n");
        printable=1;
        second=0;

    }
}