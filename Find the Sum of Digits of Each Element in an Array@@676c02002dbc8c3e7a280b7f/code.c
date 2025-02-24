// Your code here...
#include <stdio.h>
void main(){
    int input,sum=0,r;
    scanf("%d",&input);
    int arr[input];
    for (int i =0;i<input;i++){
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<input;j++){
        while(arr[j]!=0){
        r=arr[j]%10;
        sum=sum+r;
        arr[j]=arr[j]/10;
    }printf("%d ",sum);
    sum=0;
}}