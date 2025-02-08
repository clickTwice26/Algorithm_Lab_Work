#include <stdio.h>

int main() {
    int arr[] = {7, 2, 9, 4, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int evenArr[size];
    int evenCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenArr[evenCount++] = arr[i];
        }
    }

    if (evenCount > 0) {
        printf("Even numbers: ");
        for (int i = 0; i < evenCount; i++) {
            printf("%d ", evenArr[i]);
        }
        printf("\n");
    } else {
        printf("No even numbers found\n");
    }

    return 0;
}
