
#include <stdio.h>

int main(){

	int previousNumber = 0;
	int N;
	scanf("%d", &N);
	int temp;
	int missingNumber = 0;
	for (int i = 0; i < N; i++){
		scanf("%d", &temp);
		if (temp == (previousNumber+1)){
			previousNumber = temp;
			continue;
		}else{
			missingNumber = previousNumber+1;
			i++;
			
		}
	if(missingNumber != 0){
		printf("%d", missingNumber);
	}else{
		printf("There is no missing number");
	}
	}
	return 0;
}
