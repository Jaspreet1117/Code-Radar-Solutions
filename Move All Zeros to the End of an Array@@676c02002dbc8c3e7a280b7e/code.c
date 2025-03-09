// Your code here...
#include <stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    int arr[number];
    for(int i=0;i<number;i++){
        scanf("%d",&arr[i]);
    }
    int index=0;
    for (int i = 0; i < number; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }
    while (index < number) {
        arr[index++] = 0;
    }
    for (int i = 0; i < number; i++) {
        printf("%d ", arr[i]);
    }
}