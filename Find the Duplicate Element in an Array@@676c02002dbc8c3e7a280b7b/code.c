// Your code here...
#include<stdio.h>
void main(){
    int input;
    scanf("%d",&input);
    for(int i=0;i<input;i++){
        scnaf("%d",&arr[i]);
    }
    for (int i =0;i<input;i++){
        for(int j=0;j<input;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
            }
        }
    }
}