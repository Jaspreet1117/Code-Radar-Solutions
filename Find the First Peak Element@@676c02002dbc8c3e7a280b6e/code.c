// Your code here...
#include <stdio.h>
void main(){
    int number;
    scanf("%d",&number);
    int arr[number];
    for(int i=0;i<number;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<number;i++){
        for(int j=i+1;j<number;j++){
            if(i==0){
                if(arr[i]>arr[j]){
                    printf("%d",arr[i]);break;
                }
            }
            else if(arr[i]>arr[j] && arr[i-1]<arr[i]){
                printf("%d",arr[i]);break;
            }
            else if(i==number-1){
                printf("%d",-1);
                break;
            }
        }
    }
}