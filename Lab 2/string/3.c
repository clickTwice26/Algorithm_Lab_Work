#include <stdio.h>

int main(){
    char word[100];
    scanf("%s", word);
    int vowelCounter = 0;
    int consonantCounter = 0;
    for(int i = 0; word[i]!='\0';i++){
        if(
            word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' 
        ){
            vowelCounter++;

        }else{
            consonantCounter++;
        }
    }
    printf("Vowels : %d\n", vowelCounter);
    printf("Consonants : %d", consonantCounter);
    

}