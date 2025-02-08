#include <stdio.h>

int main() {
    int arr[] = {7, 2, 9, 4, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    if (size < 2) {
        printf("Array must have at least two elements\n");
        return 0;
    }

    int largest = arr[0], secondLargest = -1;

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest != -1)
        printf("Second largest number: %d\n", secondLargest);
    else
        printf("No second largest number found\n");

    return 0;
}
