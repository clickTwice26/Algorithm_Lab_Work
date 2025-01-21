#include <stdio.h>

int main(){

    int numberOfTestCase;
    scanf("%d", &numberOfTestCase);
    int caseArray[numberOfTestCase];
    for(int i = 0; i < numberOfTestCase; i++){
        scanf("%d", &caseArray[i]);
    }
    for(int i = 0; i < numberOfTestCase; i++){
        printf("%d, ",caseArray[i]);
    }
    int largestNumber = caseArray[0];
    for(int i = 1; i<numberOfTestCase; i++){
        if(!(largestNumber > caseArray[i])){
            largestNumber = caseArray[i];
        }
    }
    //printf("The largest number in the array is %d", largestNumber);
    int secondLargestNumber = 0;
    for (int i =0; i< numberOfTestCase; i++){
        if(!(secondLargestNumber > caseArray[i]) && (caseArray[i] != largestNumber)){
            secondLargestNumber = caseArray[i];
        }
    }
    //printf("The second largest number in the array is %d", secondLargestNumber);
    printf("%d\n",secondLargestNumber);
}
