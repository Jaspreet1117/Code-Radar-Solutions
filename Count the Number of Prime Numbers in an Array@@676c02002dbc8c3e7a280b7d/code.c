// Your code here...
//for countign the prime number in an array
#include <stdio.h>
void main(){
    int number;
    scanf("%d",&number);
    int arr[number];
    for(int i=0;i<number;i++){
        scanf("%d",&arr[i]);
    }
    int prime=1;
    int count=0;
    for (int j=0;j<number;j++){

       for(int i=2;i<arr[i]-1;i++){
        if(arr[j]==2){
            prime=1;

        }
        else if(arr[i]%i==0){
              prime=0;
        } 
    }
    if(prime){
        count+=1;
    }
}
print("%d",count);
}