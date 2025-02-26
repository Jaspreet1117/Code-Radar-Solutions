// Your code here...
#include<stdio.h>
void main(){
    int input,number,n;
    scanf("%d",&input);
    int arr[input];
    for(int i=0;i<input;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&number);
    number=number%input;
     for (int i = 0; i < number / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[k - i - 1];
        arr[number - i - 1] = temp;
    }
    for (int i = number; i < (n + number) / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[input + number - i - 1];
        arr[input + number - i - 1] = temp;
    }
    for (int i = 0; i < input; i++) {
        printf("%d ", arr[i]);
    }
} 