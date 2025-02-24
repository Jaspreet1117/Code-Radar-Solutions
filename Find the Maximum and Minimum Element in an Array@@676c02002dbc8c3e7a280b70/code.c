#include <stdio.h>
#include<limits.h>

int main() {
    int min,max;
    int arr[input];scanf("%d",&input);

    for (int i=0;i<=input;i++){
        scanf("%d",&arr[i]);
    }
   
    min=INT_MIN;
    max=INT_MAX;
    for (int i=0;i<input;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        printf("%d ",min);
    }
    for (int i=0;i<input;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        printf("%d",max);
    }
    return 0;
}