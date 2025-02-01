#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        printf('*');
        for (int j=1;j<=a;j++){
            printf('*');
        }
    }
    return 0;
}