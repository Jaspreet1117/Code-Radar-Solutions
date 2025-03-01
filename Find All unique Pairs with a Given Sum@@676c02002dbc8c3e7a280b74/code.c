// Your code here...
// to find all unique pairs wiht a givn sum
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
        for(int j=i+1;j<input;j++){
            if(arr[i]==arr[j] && arr[i]+arr[j]==sum){
                printf("%d %d",arr[i],arr[j]);
                break;
            }
            else if(arr[i]+arr[j]==sum){
                printf("%d %d\n",arr[i],arr[j]);
            }
        }
    }
}