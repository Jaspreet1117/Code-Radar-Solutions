// Your code here...
#include<stdio.h>
void main(){
    int input;
    scanf("%d",&input);
    int arr[input];
    for(int j=0;j<input;j++){
        scanf("%d",&arr[j]);
    }
    int number;
    int count;
    for(int i=0;i<input;i++){
        if(arr[i]>number){
            count+=1;
        }
    }
    printf("%d",count);
}