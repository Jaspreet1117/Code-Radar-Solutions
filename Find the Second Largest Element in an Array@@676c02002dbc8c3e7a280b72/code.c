// Your code here...
//to find second largest number in the array.
#include <stdio.h>
#include <limits.h>
void main(){
    int number;
    int max=INT_MIN;
    int smax=INT_MIN;
    scanf("%d",&number);
    int arr[number];
    for(int i=0;i<number;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<number;j++){
        if(max<arr[i] && max!=arr[i]){
            smax=max;
            max=arr[i];
        }
        else if{
            smax=arr[i];
        }
    }
    printf("%d",smax);
}