// Your code here...
//to find second largest number in the array.
#include <stdio.h>
#include <limits.h>
void main(){
    int number;
    int max=INT_MIN;
    int smax=-1;
    scanf("%d",&number);
    int arr[number];
    for(int i=0;i<number;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<number;j++){
        if(max<arr[j] && max!=arr[j]){
            smax=max;
            max=arr[j];
        }
        else if(smax<arr[j] && max!=arr[j]){
            smax=arr[j];
        }
    }
    printf("%d",smax);
}