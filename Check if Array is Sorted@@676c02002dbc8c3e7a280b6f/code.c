// Your code here...
#include<stdio.h>
void main(){
    int input;
    int sort=1;
    scanf("%d",&input);
    int arr[input];
    for(int i=0;i<input;i++){
        scanf("%d",&arr[i]);
    }
    for(int i =0;i<input-1;i++){
        if(arr[i]>arr[i+1]){
            sort=0;
            break;
        }
        
    }
    
    
    if(sort==1){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
}}