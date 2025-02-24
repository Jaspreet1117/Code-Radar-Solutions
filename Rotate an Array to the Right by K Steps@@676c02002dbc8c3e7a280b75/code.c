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
    n=input-number;
    for (int j=n;j<=number;j++){
        printf("%d ",arr[j]);

    }for(int k=0;k<n;k++){
        printf("%d ",arr[k]);
    }
}