// Your code here...
#include<stdio.h>
void main(){
    int input,number;
    int arr[input];
    for(int i=0;i<input;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&number);
    for (int j=input-number;j<number;j++){
        printf("%d ",arr[j]);

    }
    for(int k=0;k<number;k++){
        printf("%d ",arr[k]);
    }
}