#include <stdio.h>
#include <stdlib.h>

int closest_number(int arr[], int size, int target) {
    int closest_num = arr[0];
    int min_diff = abs(target - arr[0]);
    
    for (int i = 1; i < size; i++) {
        int diff = abs(target - arr[i]);
        if (diff < min_diff) {
            min_diff = diff;
            closest_num = arr[i];
        }
    }
    
    return closest_num;
}

int main() {
    int arr[] = {1, 3, 7, 9, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    
    int result = closest_number(arr, size, target);
    printf("The closest number to %d is %d.\n", target, result);
    
    return 0;
}
