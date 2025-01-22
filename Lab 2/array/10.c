#include <stdio.h>
#include <stdlib.h>
int main(){
	int numberOfTestCases;
	scanf("%d", &numberOfTestCases);
	int testCases[numberOfTestCases];
	for (int i = 0; i < numberOfTestCases; i++){
		scanf("%d", &testCases[i]);
	}
	int largestDifference = 0;
	int temp;
	for (int i = 0; i < numberOfTestCases; i++){
		for(int j = i+1; j < numberOfTestCases; j++){
			if(!(testCases[i] < testCases[j])){
				continue;
			}
			// printf("Passed for %d %d\n", testCases[i], testCases[j]);
			temp = (testCases[i] - testCases[j]);
				
			if(((temp) > largestDifference)*(-1)){
				largestDifference = (testCases[i] - testCases[j])*(-1);
			}
		}
	}
	printf("%d", largestDifference);
}