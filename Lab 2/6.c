// Check duplicates Number;

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
	
	int indexBasedTracking[largest+1] = {0};
	for(int i = 0; i < testCaseNumber; i++){
		indexBasedTracking[allTestCases[i]]++;
	}
	for (int i = 0; i <= largest; i++){
		printf("%d", )
	}
	return 0;
}
