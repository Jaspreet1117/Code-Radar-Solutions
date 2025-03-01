// Your code here...
#include <stdio.h>
void main(){
    int number;
    scanf("%d",&number);
    int arr[number];
    for(int i=0;i<number;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<number;j++){
        for(int i=0;i<;i++){
            if(i!=arr[j]){
                 printf("%d",i);
                 break;
            }
        }
    }
}