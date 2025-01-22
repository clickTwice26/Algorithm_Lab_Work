#include <stdio.h>

int main(){
	int numberOfTestCase;
	scanf("%d", &numberOfTestCase);
	int testCases[numberOfTestCase];
	for(int i =0; i < numberOfTestCase; i++){
		scanf("%d", &testCases[i]);
	}
	int zeroCounter = 0;
	for(int i = 0; i < numberOfTestCase; i++){
		if (testCases[i] > 0){
			printf("%d", testCases[i]);
			if((i == (numberOfTestCase-1) && zeroCounter == 0)){
				printf("\n");
			}else{
				printf(", ");
			}
		}else{
			zeroCounter++;
		}
		if(i == (numberOfTestCase-1)){
			for (int j = 0; j < zeroCounter; j++){
				printf("0");
				if (!(j == (zeroCounter-1))){
					printf(", ");
				}
			}
		}
		
	}

	return 0;
}
