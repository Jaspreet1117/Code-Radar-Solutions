// Your code here...
#include <stdio.h>
void main(){
    int number;
    scanf("%d",&number);
    int arr[number];
    for(int i=0;i<number;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<number;i++){
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
            printf("%d ",arr[i]);
        }
        else if(arr[0]>arr[1]){
            printf("%d ",arr[0]);
        }
        else if(arr[number]>arr[number-1]){
            printf("%d ",arr[number]);
        }

    }
}