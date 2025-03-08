// Your code here...
//minmum difference pair
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
void main(){
    int number,num1=0,num2=0;
    scanf("%d",&number);
    int arr[number];
    for(int i=0;i<number;i++){
        scanf("%d",&arr[i]);
    }
    int diff=INT_MAX;
    for(int i=0;i<number;i++){
        for(int j=i+1;j<number;j++){
            if(diff>abs(arr[i]-arr[j]) && i!=j){
                diff=abs(arr[i]-arr[j]);
                num1=arr[i];
                num2=arr[j];
            }
        }
    }
    num1>num2?printf("%d",num2):printf("%d",num1);

}
