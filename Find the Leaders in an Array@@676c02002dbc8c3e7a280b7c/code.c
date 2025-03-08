// Your code here...
#include <stdio.h>
void main(){
    int number;
    scanf("%d",&number);
    int arr[number];
    for(int i=0;i<number;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<number;i++){
        int leader=1;
        for(int j=i+1;j<number;j++){
            if(arr[i]<arr[j]){
                leader=0;break;
            }
            
        }
        if(leader)printf("%d ",arr[i]);
    }
    //printf("%d",arr[number-1]);

}