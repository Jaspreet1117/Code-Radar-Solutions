// Your code here...
//to find second largest number in the array.
#include <stdio.h>
#include <limits.h>
void main(){
    int number;
    scanf("%d",&number);
    int arr[number];
    for(int i =0;i<number;i++){
        scanf("%d",&number);
    }
    int smax=INT_MIN;
    int max=INT_MIN;
    for(int i=0;i<number;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(number==1){
            smax=-1;
        }
        else if(smax<arr[i] && max!=arr[i]){
            smax=arr[i];
        }
    }
    printf("%d",-1);
}