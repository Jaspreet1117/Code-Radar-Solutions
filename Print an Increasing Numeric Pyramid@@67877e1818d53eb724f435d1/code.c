// Your code here...
//print an increasing numeric pyramid
#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i++){
        printf(" ");
    }
    for(int j=1;j<=i;j++){
        printf("%d ",j);
    }
    printf("\n");
}
