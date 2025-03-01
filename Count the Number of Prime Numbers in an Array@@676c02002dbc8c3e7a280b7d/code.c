// Your code here...
#include<stdio.h>
void main(){
    int input,count=0;
    
    scanf("%d",&input);
    int arr[input];
    for (int i=0;i<input;i++){
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<input;i++){
        for(int j=2;j<input-1;j++){
            if(arr[i]%j==0 ){
                 continue;
            }
            if(arr[i]==2){
                count+=1;
            }
            else{
                count+=1;
            }
        }
    }
    printf("%d",count);
}