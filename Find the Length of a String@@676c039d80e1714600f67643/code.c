// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    int count=0;
   char str[100];
    scanf("%s",str);
   int length = strlen(str);
   for (int i=0;i<length;i++){count++;}
   printf("%d",count);
    return 0;
}