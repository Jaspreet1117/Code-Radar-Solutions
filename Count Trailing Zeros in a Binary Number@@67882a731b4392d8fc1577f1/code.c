#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {

    int number,count;
    scanf("%d",&number);
    while(number >0 && (number & 1)==0){
    count++;
    number >>= 1;

}
printf("%d",count);
    return 0;
}