#include <stdio.h>

int main() {
    char str[100];
    int age;
    char str2[200];
    scanf("%s %d %s",&str,&age,&str2);
    printf("Name: %s\nAge: %d\nHobby: %s",str,age,str2);
    return 0;
}