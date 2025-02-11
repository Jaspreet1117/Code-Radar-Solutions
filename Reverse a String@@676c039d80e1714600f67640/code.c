#include <stdio.h>


int main() {
    char str[90];
    scanf("%s",str);
    for (int i=89;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}