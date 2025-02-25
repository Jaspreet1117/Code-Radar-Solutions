// Your code here...
#include"stdio.h"
void main(){
    int input;
    scanf("%d",&input);
    int arr[input];
    for(int i=0;i<input;i++){
        scanf("%d",&arr[i]);
    }
    if (input==2){
        if(arr[0]>arr[1]){
            printf("%d",arr[0]);
        }
        else{
            printf("%d",arr[1]);
        }
    }
    for(int i=1;i<input-1;i++){
        if(arr[i-1]>arr[i] && arr[i]>arr[i+1]){
            printf("%d",arr[i-1]);
            break;
        }
        else{continue;}
    }
}