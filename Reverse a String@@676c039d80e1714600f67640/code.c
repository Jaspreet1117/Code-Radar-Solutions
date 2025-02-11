#include <stdio.h>


int main() {
    char str[90];
    scanf("%s",str);
    for (int i=90;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}