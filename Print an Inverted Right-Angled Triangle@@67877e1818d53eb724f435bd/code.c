#include <stdio.h>


int main() {
    int a,j;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
       for (j = a;j>=1;j--){
           printf("* ");
       }
       printf("\n");
       j=a-1;
    }
    return 0;
}