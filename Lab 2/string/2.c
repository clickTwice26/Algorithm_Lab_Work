// Palindrome Checker
#include <stdio.h>


int main(){
	char string[100];
	scanf("%s", string);

	int lengthCounter = 0;
	for (int i = 0; string[i] != '\0'; i++){
		lengthCounter++;
	}
	for (int i = 0, j=lengthCounter-1; i < lengthCounter ;i++,j--){
		// printf("%d %d", i, j);
		if (string[i] == string[j]){
			if(i == (lengthCounter-1)){
				printf("Yes, it's a palindrome.");
			}
			continue;
		}else{
			printf("No, it's not a palindrome.");
			break;
		}
				
	}
	
	return 0;
}
