#include <stdio.h>


int main() {
    int decimal,remain,binary=0,place=1;
    scanf("%d",&decimal);
    while(decimal>0){
        remain=decimal%2;
        binary=binary+(remain*place);
        decimal=decimal/2;
        place=place*10;
    }
    printf("%d",binary);
    return 0;
}