#include <stdio.h>

int smallest_greater(int arr[], int size, int x) {
    int left = 0, right = size - 1, result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] > x) {
            result = arr[mid];
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return result;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 6;

    int result = smallest_greater(arr, size, x);

    if (result != -1)
        printf("Smallest number greater than %d: %d\n", x, result);
    else
        printf("No number greater than %d found\n", x);

    return 0;
}
