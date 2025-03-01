// Your code here...
#include <stdio.h>
#include<limits.h>
void main(){
    int number;
    scanf("%d",&number);
    int arr[number];
    for(int i=0;i<number;i++){
        scanf("%d",&arr[i]);
    }
    int largest=-1;
    for(int i=0;i<number;i++){
        if(arr[i]%2==0){
            if(largest<arr[i]){
                largest=arr[i];
            }
        else{continue;}
        }
    }
    printf("%d",largest);
    
}