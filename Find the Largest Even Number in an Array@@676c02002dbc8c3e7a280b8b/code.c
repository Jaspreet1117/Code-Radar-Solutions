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
    int largest=INT_MIN;
    for(int i=0;i<number;i++){
        if(arr[i]%2==0){
            if(largest<arr[i]){
                largest=arr[i];
            }
       
        }
    }
    if(largest==INT_MIN){
    printf("%d",-1);}
    else{
        pritnf("%d",largest);
    }
    
}