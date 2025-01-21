#include <stdio.h>

int main(){
	int numberOfTestCase;
	int targetSum;
	scanf("%d %d", &numberOfTestCase, &targetSum);
	int testCases[numberOfTestCase];
	for (int i = 0; i < numberOfTestCase; i++){
		scanf("%d", &testCases[i]);
	}
	int x;
	int y;
	for(int i = 0; i < numberOfTestCase; i++){
		x = testCases[i];
		for(int j=i+1; j < numberOfTestCase; j++){
			y = testCases[j];
			if((x+y) == targetSum){
				printf("(%d, %d)\n", x, y);
			}
		}
	}

	return 0;
}
