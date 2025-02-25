// Your code here...
#include<stdio.h>
void main(){
    int input;
    int sort=0;
    scanf("%d",&input);
    int arr[input];
    for(int i =0;i<input;i++){
        scanf("%d",&arr[i]);
    }
    for(int i =0;i<input;i++){
        if (arr[i]<=arr[i+1]){
            sort=1;
            break;
        }
        else{
            sort=0;
        }
    }
    if(sort){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}