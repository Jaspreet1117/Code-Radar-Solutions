// Your code here...
// to check the array palidrome or not
#include <stdio.h>
void main(){
    int input,palidrome=1;
    scanf("%d",&input);
    int arr[input];
    for(int i=0;i<input;i++){
        scanf("%d",&arr[i]);
    }
    int brr[input];
    for(int j=0;j<input;j++){
        brr[j]=arr[j];
    }
    for(int k=0;k<input;k++){
        if(arr[k]!=brr[k]){
                 palidrome=0;
                 break;
            }
        }
    
    palidrome?printf("YES"):printf("NO");
}