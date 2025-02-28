// Your code here...
#include<stdio.h>
void main(){
    int input;
    scanf("%d",&input);
    int arr[input];
    for(int i =0;i<input;i++){
        scanf("%d",&arr[i]);
    }
    int max_product=0;
    for(int j=0;j<input;j++){
        for(int k=j;k<input;k++){
            if(arr[j]*arr[k]>max_product && arr[j]!=arr[k])
            max_product=arr[j]*arr[k];
        }
    }
    printf("%d",max_product);
}