// Check duplicates Number;
#include <stdlib.h>
#include <stdio.h>

int main(){
	int testCaseNumber;
	scanf("%d", &testCaseNumber);
	int allTestCases[testCaseNumber];
	for(int i = 0; i < testCaseNumber; i++){
		scanf("%d", &allTestCases[i]);
	}
	// finding the largest to determine the max size of the new array

	int largest = allTestCases[0];
	for (int i = 0; i < testCaseNumber; i++){
		if(allTestCases[i] > largest){
			largest = allTestCases[i];
		}
	}
	// const int createLargest = largest;
	
	// int indexBasedTracking[createLargest+1] = {0};
	int *indexBasedTracking = malloc((largest+1 ) * sizeof(int));
	for(int i = 0; i < testCaseNumber; i++){
		indexBasedTracking[allTestCases[i]]++;
	}
	for (int i = 0; i <= largest; i++){
		// printf("%d", indexBasedTracking[i]);
		if(indexBasedTracking[i] > 1){
		
			printf("Yes, duplicate exists.");
			break;
		}else{
			continue;
		}
		printf("No, duplicate doesn't exists.");

	}

	return 0;
}
