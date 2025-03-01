// Your code here...
#include <stdio.h>

void main() {
    int number;
    scanf("%d", &number);
    int arr[number];
    for (int i = 0; i < number; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < number; i++) {
        int maxRight = -1;
        for (int j = i + 1; j < number; j++) {
            if (arr[j] > arr[i]) {
                maxRight = arr[j];
                break;
            }
        }
        arr[i] = maxRight;
    }
    for (int i = 0; i < number; i++) {
        printf("%d ", arr[i]);
    }
}
