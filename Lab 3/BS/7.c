#include <stdio.h>

int search_rotated(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[left] <= arr[mid]) { 
            if (arr[left] <= target && target < arr[mid])
                right = mid - 1;
            else
                left = mid + 1;
        } else {
            if (arr[mid] < target && target <= arr[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {4, 5, 6, 7, 1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    int result = search_rotated(arr, size, target);

    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
