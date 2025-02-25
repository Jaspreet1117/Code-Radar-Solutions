// Your code here...
#include"stdio.h"
void main(){
    int input;
    scanf("%d",&input);
    for(int i=0;i<input;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<input;i++){
        if(arr[i-1]>arr[i] && arr[i]>arr[i+1]){
            printf("%d",arr[i]);
            break;
        }
        else{continue;}
    }
}