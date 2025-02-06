#include <stdio.h>


int main() {
    unsigned int number;
    int result=1;

    scanf("%d",&number);
   while(!(number & 1)){
    number >>=1;
    result++;

   }
   printf("%d",result);
    return 0;
}