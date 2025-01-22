#include <stdio.h>
#define MAX_NUMBER_IN_THE_ARRAY 10
int main(){

    int numberOfTestCases;
    scanf("%d", &numberOfTestCases);
    int testCases[numberOfTestCases+1];
    int containerPod[MAX_NUMBER_IN_THE_ARRAY] = {0};
    /*
    if(containerPod[0] == 0){
        printf("NULL");
    }*/
    int temp;
    for(int i = 0; i < numberOfTestCases; i++){
        scanf("%d", &temp);
        containerPod[temp]++;
    }

    for (int i = 0; i < MAX_NUMBER_IN_THE_ARRAY; i++){
        if (containerPod[i] > 0){
            printf("%d: %d times\n", i, containerPod[i]);
        }


    }



}
