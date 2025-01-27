//Find the longest word in sentence

#include <stdio.h>

int main(){
    // char sentence[100];
    // fgets(sentence, 100, stdin);
    // char sentence[100] = "I love coding";
    char sentence[100] = "I love coding";
    int lengthCounter =0;
    for(int i = 0; sentence[i] != '\0'; i++){
        lengthCounter++;
    }
    printf("Length : %d\n", lengthCounter);
    int start = 0;
    int largestGapSize = 0;
    int gapSize = 0;
    int lastIndex = 0;
    int startIndex;
    for(int i = 0; i < lengthCounter; i++){
        if(i == (lengthCounter-1)){
            start = 1;
        }
        if((sentence[i] == ' ') && (start == 0)){
            startIndex = i;
            start = 1;
            
        }
        if(sentence[i] != ' '){
            // printf("gap letter : %c %d\n", sentence[i], gapSize);
            gapSize++;
            continue;

        }
        if(((sentence[i] == ' ') || (i == (lengthCounter-1))) && (start == 1 || (i == (lengthCounter-1)))){
            if(gapSize > largestGapSize){
                printf("Larger Gapsize found  %d > %d, startIndex : %d\n", gapSize, largestGapSize, startIndex);
                lastIndex = i;
                largestGapSize = gapSize;
                gapSize = 0;
                start = 0;
                startIndex = i;
            }else{
                // printf("Gap Size : %d\n", gapSize);
                gapSize = 0;
                start = 0;
                startIndex = i;

            }
            // printf("Gap Found : %d, Start : %d\n", gapSize, start);

        }
    }
    
    // printf("%d %d", largestGapSize, lastIndex);
    // printf("Start point %d \n", (lastIndex-largestGapSize));
    printf("Largest Gap Size : %d\n", largestGapSize);
    // printf("Last Index : %d\n", lastIndex);
    // printf("Start Index : %d\n", startIndex);
    for(int i = startIndex-largestGapSize; i < startIndex; i++){
        printf("%c", sentence[i]);
    }

}