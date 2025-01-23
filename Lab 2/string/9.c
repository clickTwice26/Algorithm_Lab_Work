#include <stdio.h>

int isExists(char word[100], char letter){
    for(int i = 0; word[i] != '\0'; i++){
        if(word[i] == letter){
            return 1;
        }
    }
    return 0;
}
int main(){
    char word[100];
    scanf("%s", word);
    int letterCounter = 0;
    char uniqueLetters[100];
    int uniqueCounter = 0;
    for(int i = 0; word[i] != '\0'; i++){
        if(!isExists(uniqueLetters, word[i])){
            uniqueLetters[uniqueCounter] = word[i];
            uniqueCounter++;
        }
    }
    for(int i = 0; uniqueLetters[i] != '\0'; i++){
        for(int j = 0; word[j] != '\0'; j++){
            if(uniqueLetters[i] == word[j]){
                letterCounter++;
            }
        }
        printf("%c : %d\n", uniqueLetters[i], letterCounter);
        letterCounter=0;
    }


}