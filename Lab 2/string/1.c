//Reverse a string;

#include <stdio.h>

int main(){
	char string[100];

	scanf("%s", string);
	int counter = 0;
	for(int i = 0;string[i] != '\0'; i++){
		// printf("%c", string[i]);
		counter++;
	}
	for(int i = counter; i >= 0; i--){
		printf("%c", string[i]);
	}
	
	
	
}
