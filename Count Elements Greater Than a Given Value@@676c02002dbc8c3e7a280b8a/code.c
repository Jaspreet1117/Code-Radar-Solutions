// Your code here...
#include<stdio.h>
void main(){
    int input;
    scanf("%d",&input);
    int arr[input];
    int number;
    scanf("%d",&number);
    for(int j=0;j<input;j++){
        scanf("%d",&arr[j]);
    }
    
    int count=0;
    for(int i=0;i<input;i++){
        if(arr[i]>number){
            count+=1;
        }
    }
    printf("%d",count);
}