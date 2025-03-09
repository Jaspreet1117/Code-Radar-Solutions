// Your code here...
//for countign the prime number in an array
#include <stdio.h>
int prime(int x){
    int isprime=1;
    if(x==2){
        return 1;
    }
    if(x<2 || x%2==0){
        return 0;
    }
    for(int j=2;j<x;j++){
        if(x%j==0){
            return 0;
        }
    }
    return 1;

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
        if(prime(arr[i])){
            count++;
        }
        

    }
printf("%d",count);
}