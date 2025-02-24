// Your code here...
#include<stdio.h>
void main(){
    int input,number;
    scanf("%d",&input);
    int arr[input];
    for (int i =0;i<input;i++){
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<input;j++){
        if (number==arr[j]){
            printf("%d",j);
        }
    }
    printf("%d",-1);
}