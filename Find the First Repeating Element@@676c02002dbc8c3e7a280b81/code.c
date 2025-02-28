// Your code here...
#include<stdio.h>
void main(){
    int input;
    scanf("%d",&input);
    int arr[input];
    for(int i=0;i<input;i++){
        scanf("%d",&arr[i]);
    }
    int found=0;
    for(int j=0;j<input;j++){
        for(int k=j+1;k<input;k++){
            if(arr[j]==arr[k]){
                printf("%d",arr[j]);
                found=1;
                break;
            }
        }
        if(found){break;}
    }if(!found){printf("%d",-1);}
}