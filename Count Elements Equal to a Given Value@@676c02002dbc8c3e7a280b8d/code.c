// Your code here...
#include <stdio.h>
void main(){
    int input;
    scanf("%d",&input);
    int number;
    scanf("%d",&number);
    int arr[input];
    for(int i=0;i<input;i++){
        scanf("%d",&arr[i]);
    }
    int count =0;
    for(int k=0;k<input;k++){
        if(arr[k]==number){
            count+=1;

        }
    }
    printf("%d",count);
}