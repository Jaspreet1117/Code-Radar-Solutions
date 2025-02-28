// Your code here...
//minmum difference pair
#include<stdio.h>
#include<limits.h>
void main(){
    int input;
    scanf("%d",&input);
    int arr[input];
    for(int i=0;i<input;i++){
        scanf("%d",&arr[i]);
    }
    int mim_diff=arr[0];
    for(int j=0;j<input;j++){
        for(int k=j;k<input;k++){
            if(arr[j]-arr[k]<mim_diff && arr[j]==arr[k]){
                mim_diff=arr[j]-arr[k];
            }
        }
    }
    printf("%d",arr[k],arr[j]);

}