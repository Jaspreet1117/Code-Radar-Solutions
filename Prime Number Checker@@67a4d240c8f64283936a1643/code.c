#include <stdio.h>



int main() {
    int isPrime(num){
        for (int pr=2;pr<=num-1;pr++){
            if(num%pr==0){
                break;
            }
            else{printf("hjv");}
        }
    }
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));

    }
    return 0;
}