#include <stdio.h>

int main() {
    int arr[] = {7, 2, 9, 4, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 4;
    int found = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
