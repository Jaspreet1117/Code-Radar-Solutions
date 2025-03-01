// Your code here...
#include <stdio.h>

void main() {
    int number;
    scanf("%d", &number);
    int arr[number];
    for (int i = 0; i < number; i++) {
        scanf("%d", &arr[i]);
    }
    int brr[number];
    for(int i=0;i<number;i++){
        for(int j=i+1;j<number;j++){
            if(arr[i]<arr[j]){
                brr[i]=arr[j];
            }
        }
    }
}
