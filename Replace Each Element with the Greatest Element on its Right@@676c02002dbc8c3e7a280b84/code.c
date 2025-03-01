// Your code here...
#include <stdio.h>
void main(){
    int number;
    scanf("%d",&number);
    int arr[number];
    for(int i=0;i<number;i++){
        scanf("%d",&arr[i]);
    }
    int rightmax=-1;
    for(int i=0;i<number;i++){
        for(int j=i+1;j<number;j++){
            if(arr[i]<arr[j]){
                rightmax=arr[j];
                break;
            }
            arr[i]=rightmax
        }}
        for(int i=0;i<number;i++){
        printf("%d",rightmax);}

    
}