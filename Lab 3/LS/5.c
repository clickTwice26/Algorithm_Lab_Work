#include <stdio.h>

int main() {
    int arr[] = {7, 1, 9, 5, 7, 5, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    int first = -1, last = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            first = i;
            break;
        }
    }

    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] == target) {
            last = i;
            break;
        }
    }
    printf("First position: %d\n", first);
    printf("Last position: %d\n", last);

    return 0;
}
