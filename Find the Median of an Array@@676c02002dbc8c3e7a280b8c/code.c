// Your code here...
#include <stdio.h>
void main(){
    int number;
    scanf("%d",&number);
    int arr[number];
    for(int i=0;i<number;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<number;i++){
        sum+=arr[i];
    }
    sum=sum/number;
    printf("%d",sum);
}