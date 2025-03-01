// Your code here...
#include <stdio.h>
void main(){
    int number;
    scanf("%d",&number);
    int arr[number];
    for(int i=0;i<number;i++){
        scanf("%d",&arr[i]);
    }
    if(arr[0]>arr[1] ){
            printf("%d ",arr[0]);
        }
    for(int i=1;i<number;i++){
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
            printf("%d ",arr[i]);
        }
    }
    printf("%d ",arr[number-1]);

}