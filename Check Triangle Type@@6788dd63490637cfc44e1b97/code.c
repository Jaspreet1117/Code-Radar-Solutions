#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int side1,side2,side3;
    scanf("%d%d%d",&side1,&side2,&side3);
    if (side1==side2 && side3==side1 && side2==side3){
        printf("Equilateral");
    }
    return 0;
}