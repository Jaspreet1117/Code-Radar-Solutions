// Your code here...
#include<stdio.h>
void main(){
    int input,number;
    int arr[input];
    for(int i=0;i<input;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&number);
    for (int i =input-number;i<number;i++){
        printf("%d ",arr[i]);

    }
    for(int i=0;i<number;i++){
        printf("%d ",arr[i]);
    }
}