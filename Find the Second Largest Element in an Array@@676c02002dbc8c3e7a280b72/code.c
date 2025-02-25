// Your code here...
//to find second largest number in the array.
#include<stdio.h>
#include<limits.h>
void main(){
    int input;
    scanf("%d",&input);
    int arr[input];
    for(int i=0;i<input;i++){
        scanf("%d",&arr[i]);
    }
    int max,smax;
    max=INT_MIN;
    smax=INT_MIN;
    for(int i=0;i<input;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for (int i =0;i<input;i++){
        if(smax<arr[i] && arr[i]!=max){
            smax=arr[i];
        }
    }
    print("%d",smax);

}