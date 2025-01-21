#include <stdio.h>

int main(){
 
    int numberOfTestCase;
 	scanf("%d", &numberOfTestCase);
 	int testCases[numberOfTestCase];
 	for(int i = 0; i < numberOfTestCase; i++){
 		scanf("%d", &testCases[i]);
 	}
 	for (int i = 0; i < numberOfTestCase; i++){
 		for (int j = i+1; j < numberOfTestCase; j++){
 			if(testCases[i] > testCases[j]){
	 			if(j == (numberOfTestCase-1)){
	 				printf("%d ", testCases[i]);

 				}
 				continue;
 			}else{
 				break;
 			}

 		}
 	}   
 	printf("%d\n", testCases[numberOfTestCase-1]); // last number will always be leader elements
	return 0;
}