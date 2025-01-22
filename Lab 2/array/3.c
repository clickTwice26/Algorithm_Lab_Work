#include <stdio.h>


int main(){
    int numberOfTestCases;
    scanf("%d", &numberOfTestCases);
    int testCases[numberOfTestCases];
    for (int i = 0; i < numberOfTestCases; i++){
         scanf("%d", &testCases[i]);
    }
    int rotation;
    printf("Rotate: ");
    scanf("%d", &rotation);
    int rotationPosition = (numberOfTestCases/rotation)-1;
    for (int i = rotationPosition+1; i < numberOfTestCases; i++){
        printf("%d ", testCases[i]);
    }
    for (int i = 0; i < rotationPosition+1; i++){
        printf("%d ", testCases[i]);
    }


    return 0;
}
