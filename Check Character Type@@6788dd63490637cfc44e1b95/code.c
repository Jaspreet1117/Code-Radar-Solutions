#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(isdigit(ch)){
        printf("Digit");
    }
    else if (ch=='a' || ch=='e' || ch='u' || ch=='o' || ch=='i'|| ch=='A' || ch=='E' || ch=='O' || ch=='U' || ch=='I'){
        printf("Vowel");
    }
    else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        printf("Consonant");
    }
    else{
        printf("Special Character");
    }

    return 0;
}