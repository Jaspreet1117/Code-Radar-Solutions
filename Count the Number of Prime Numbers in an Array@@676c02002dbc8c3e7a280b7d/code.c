// Your code here...
//for countign the prime number in an array
#include <stdio.h>
int prime(int x){
    int isprime=1;
    if(x==2){
        return isprime;
    }
    for(int j=2;j<x;j++){
        if(x%j==0){
            isprime=0;
        }
    }
    return isprime;

}
void main(){
    int number;
    scanf("%d",&number);
    int arr[number];
    for(int i=0;i<number;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<number;i++){
        prime(arr[i]);
        if(prime){
            count+=1;
        }

    }
printf("%d",count);
}