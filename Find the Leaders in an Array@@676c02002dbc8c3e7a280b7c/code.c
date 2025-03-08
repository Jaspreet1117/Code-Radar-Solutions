// Your code here...
#include <stdio.h>
void main(){
    int number;
    scanf("%d",&number);
    int arr[number];
    for(int i=0;i<number;i++){
        scanf("%d",&arr[i]);
    }
    int leader=0;
    for(int i=0;i<number;i++){
        for(int j=i+1;j<number;j++){
            if(arr[i]>=arr[j]){
                leader=1;
            }
            else{
                leader=0;
                break;
            }
        }
        if(leader)printf("%d ",arr[i]);
    }

}