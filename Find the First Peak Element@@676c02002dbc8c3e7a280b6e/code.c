#include <stdio.h>

void main() {
    int number;
    scanf("%d", &number);
    int arr[number];
    for (int i = 0; i < number; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < number; i++) {
        if (i == 0) {
            if (number > 1 && arr[i] > arr[i + 1]) {
                printf("%d", arr[i]);
                return;
            }
        } 
        else if (i == number - 1) {
            if (arr[i] > arr[i - 1]) {
                printf("%d", arr[i]);
                return;
            }
        } 
        else {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                printf("%d", arr[i]);
                return;
            }
        }
    }
    printf("-1");
}
