#include <stdio.h>

int first_position(int arr[], int size, int target) {
    int left = 0, right = size - 1, result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            result = mid;
            right = mid - 1;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    int result = first_position(arr, size, target);

    if (result != -1)
        printf("First occurrence at index: %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
