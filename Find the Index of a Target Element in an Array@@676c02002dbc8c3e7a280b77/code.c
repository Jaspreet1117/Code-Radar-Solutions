// Your code here...
#include<stdio.h>
void main(){
    int input,number,var=0;
    scanf("%d",&input);
    int arr[input];
    for (int i =0;i<input;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&number);
    for(int j=0;j<input;j++){
        if(number==arr[j]){
           printf("%d",j);
            var=1;
            break;
        }
    }
    if(var==0){
    printf("%d",-1);}
}