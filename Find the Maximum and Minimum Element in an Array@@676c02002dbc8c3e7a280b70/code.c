#include <stdio.h>
#include<limits.h>

int main() {
    int min,max,input;
    scanf("%d",&input);
    int arr[input];

    for (int i=0;i<input;i++){
        scanf("%d",&arr[i]);
    }
   max=arr[0];
   min=arr[0];
   for(int i =0;i<input;i++){
       if(arr[i]>max){
        max=arr[i];
       }
       if(arr[i]<min){
        min=arr[i];
       }
   }
   printf("%d %d",min,max);
    return 0;
}