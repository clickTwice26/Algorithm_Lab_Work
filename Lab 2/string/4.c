#include <stdio.h>

int main(){

    char string[100];
    scanf("%s", string);
    int length = 0;
    while(string[length] != '\0'){
        length++;
    }
    char storage[100]; // to solve the last comma
    int storageCounter = 0;
    for (int i = 0; i < length ; i++){
        for (int j = i+1; j < length; j++){
            if (string[i] == string[j]){
                storage[storageCounter] = string[i];
                storageCounter++;
                // printf("%c", string[i]);
                // if(i == (length-1)){

                // }else{
                //     printf(", ");

                // }
                break;
            }
        }
    }
    for(int i = 0; i < storageCounter; i++){
        printf("%c", storage[i]);
        if(i == (storageCounter - 1)){
        }else{
            printf(", ");

        }
    }
}