#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n1,n2,result;
    scanf("%d%d",&n1,n2);
    result=n1^(1<<n2);
    printf("%d",result);
    return 0;
}