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
        for (int j=i;j<input;j++){
            if(arr[i]+arr[j]==sum){
                printf("%d %d",arr[i],arr[j])
            }
        }
    }
}