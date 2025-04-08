// Your code here...
#include <stdio.h>
int bubblesort(int *arr,int number){
    for(int i=0;i<number-1;i++){
        for(int j=0;j<number-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    if(number>1){
        return arr[n-1];
    }
    else{
        return -1;
    }
}
int main(){
    int number;
    scanf("%d",&number);
    int arr[number];
    for(int i=0;i<number;i++){
        scanf("%d",&arr[i]);
    }
    int result=bubblesort(arr,number);
    printf("%d",bubblesort);
    
}