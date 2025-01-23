//Find the longest word in sentence

#include <stdio.h>

int main(){
    char sentence[100];
    fgets(sentence, 100, stdin);
    int lengthCounter =0;
    for(int i = 0; sentence[i] != '\0'; i++){
        lengthCounter++;
    }
    int start = 0;
    int largestGapSize = 0;
    int gapSize = 0;
    int lastIndex = 0;
    for(int i = 0; i < lengthCounter; i++){
        if((sentence[i] == ' ') && (start == 0)){
            start = 1;
            
        }
        if(sentence[i]!= ' '){
            gapSize++;

        }
        if(((sentence[i] == ' ') || (i == (lengthCounter-1))) && (start == 1)){
            if(gapSize > largestGapSize){
                lastIndex = i;
                largestGapSize = gapSize;
                gapSize = 0;
                start = 0;
            }
        }
    }
    
    // printf("%d %d", largestGapSize, lastIndex);
    // printf("Start point %d \n", (lastIndex-largestGapSize));
    for(int i = (lastIndex-largestGapSize); i < (lastIndex-largestGapSize)+largestGapSize; i++){
        printf("%c", sentence[i]);
    }

}