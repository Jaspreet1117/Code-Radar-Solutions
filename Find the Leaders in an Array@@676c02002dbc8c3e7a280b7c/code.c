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
            if(i==0 && j==1 && arr[i]>arr[j]){
                printf("%d ",arr[i]);
            }
            if(i!=0 && arr[i]>arr[j] && arr[i-1]<arr[i]){
                printf("%d ",arr[i]);
            }
        }
    }
    printf("%d",arr[number-1]);

}