#include <stdio.h>

int main() {
    int arr[] = {7, 2, 9, 4, 7, 5, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    printf("Count of %d: %d\n", target, count);

    return 0;
}
