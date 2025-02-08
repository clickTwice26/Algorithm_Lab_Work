#include <stdio.h>

char* number_exists(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return "YES";
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return "NO";
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    printf("%s\n", number_exists(arr, size, target));

    return 0;
}
