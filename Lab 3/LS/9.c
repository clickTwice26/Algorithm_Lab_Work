#include <stdio.h>

int main() {
    int arr[] = {7, 2, 9, 4, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 4;
    int result[size];
    int resultCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > target) {
            result[resultCount++] = arr[i];
        }
    }

    if (resultCount > 0) {
        printf("Numbers greater than %d: ", target);
        for (int i = 0; i < resultCount; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
    } else {
        printf("No numbers greater than %d found\n", target);
    }

    return 0;
}
