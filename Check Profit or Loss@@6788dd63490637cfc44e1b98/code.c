#include <stdio.h>


int main() {
    int cost,sell;
    scanf("%d %d",&cost,&sell);
    if (cost>sell){printf("Loss");}
    else if (cost==sell){printf("No Profit No Loss");}
    else{printf("Profit");}
    return 0;
}