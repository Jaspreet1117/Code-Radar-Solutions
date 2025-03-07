// Your code here...
#include<stdio.h>
void main(){
    int input,count=0;
    
    scanf("%d",&input);
    int arr[input];
    for (int i=0;i<input;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<input;i++){
        if(arr[i]<=1){count+=0;
        }
        for(int j=2;j<input-2;j++){
            if(arr[i]%2==0){
                count+=0;
            }
            else{
                count+=1;
            }
        }

    }
    printf("%d",count);
}