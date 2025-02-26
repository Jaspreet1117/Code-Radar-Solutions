// Your code here...
//print an increasing numeric pyramid
#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    for(int k=n;k>i;k--){
        printf(" ");
        }
    
    for(int j=1;j<=i;j++){
        printf("%d ",j);
        }
    }
    printf("\n");
}
