// Your code here...
#include<stdio.h>
int main(){
    int input,even=0,odd=0;
    scanf("%d",&input);
    int arr[input];
    for (int i =0; i<input;i++){
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<input;j++){
        if(arr[j]%2==0){
            even+=1;
        }
        else{
            odd+=1;
        }
    }
    printf("%d %d",even,odd);
}