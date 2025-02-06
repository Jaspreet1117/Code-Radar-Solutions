#include <stdio.h>


int main() {
    unsigned int number;
    int result=1;

    scanf("%u",&number);
   while(!(number & 1)){
    number >>=1;
    result++;

   }
   printf("%d",result-1);
    return 0;
}