#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    int arr[number];

    for (int i = 0; i < number; i++) {
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < number; j++) {
        if (arr[j] == 0) {  
            for (int k = j; k < number - 1; k++) {  // Shift elements to the left
                arr[k] = arr[k + 1];
            }
            arr[number - 1] = 0;  // Last element ko zero kar diya
        }
    }

    for (int i = 0; i < number; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
