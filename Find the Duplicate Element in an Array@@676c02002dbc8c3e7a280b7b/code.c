// Your code here...
//to remove duplicates from an array
#include<stdio.h>
void main(){
    int input;
    scanf("%d",&input);
    int arr[input];
    for(int i=0;i<input;i++){
        scanf("%d",&arr[i]);
    }
    for (int i =0;i<input;i++){
        for(int j=0;j<input;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
            }
        }
    }
}