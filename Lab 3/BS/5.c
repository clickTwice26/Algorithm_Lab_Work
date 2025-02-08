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

int last_position(int arr[], int size, int target) {
    int left = 0, right = size - 1, result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            result = mid;
            left = mid + 1;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int occuranceCount(int arr[], int size, int target) {
    int first = first_position(arr, size, target);
    if (first == -1)
        return 0;

    int last = last_position(arr, size, target);
    return last - first + 1;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    printf("Count of %d: %d\n", target, occuranceCount(arr, size, target));

    return 0;
}
