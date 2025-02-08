#include <stdio.h>

int main() {
    int arr[] = {7, 2, 9, 4, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 4;
    int result = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            result = i;
            break;
        }
    }

    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
