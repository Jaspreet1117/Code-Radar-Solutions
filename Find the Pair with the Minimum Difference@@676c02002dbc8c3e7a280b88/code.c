// Your code here...
//minmum difference pair
#include <stdio.h>
#include <limits.h>
void main(){
    int number,num1=0,num2=0;
    scanf("%d",&number);
    int arr[number];
    for(int i=0;i<number;i++){
        scanf("%d",&arr[number]);
    }
    int diff=arr[0];
    for(int i=0;i<number;i++){
        for(int j=i+1;j<number;j++){
            if(diff>arr[i]-arr[j]){
                diff=arr[i]-arr[j];
                num1=arr[i];
                num2=arr[j];
            }
        }
    }
    printf("%d %d",num1,num2);

}
