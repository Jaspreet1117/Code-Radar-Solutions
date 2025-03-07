// to find all unique pairs with a given sum
#include <stdio.h>
void main(){
    int input;
    scanf("%d",&input);
    int arr[input];
    for (int i=0;i<input;i++){
        scanf("%d",&arr[i]);
    }
    int sum;
    scanf("%d",&sum);
    for(int i=0;i<input;i++){
        if (i > 0 && arr[i] == arr[i - 1]) {
            continue;
        }
        for(int j=i+1;j<input;j++){
            if (j > i + 1 && arr[j] == arr[j - 1]) {
                continue;
            }
           if(arr[i]+arr[j]==sum){
           (arr[i]>arr[j])?printf("%d %d\n",arr[j],arr[i]):printf("%d %d\n",arr[i],arr[j]);
           }
        }
    }
}