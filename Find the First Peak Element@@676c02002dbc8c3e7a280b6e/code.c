// Your code here...
#include"stdio.h"
//#include <limits.h>
void main(){
    int input;
    scanf("%d",&input);
    int arr[input];
    for(int i=0;i<input;i++){
        scanf("%d",&arr[i]);
    }
    int peak=0;
    for(int i=1;i<input;i++){
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
            peak=arr[i];
            break;
        }
    }
    if (peak=0){
        printf("%d",-1);
    }
    else{
        printf("%d",peak);
    }
}