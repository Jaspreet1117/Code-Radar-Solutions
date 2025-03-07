// Your code here...
#include"stdio.h"
void main(){
    int input;
    scanf("%d",&input);
    int arr[input];
    for(int i=0;i<input;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<input;i++){
        for (int j=i+1;j<input;j++){
            if((i == 0 || arr[i] > arr[i - 1]) && (i == input - 1 || arr[i] > arr[i + 1])){
                printf("%d ",arr[i]);
                break;
            }
        }
    }
}