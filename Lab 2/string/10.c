#include <stdio.h>

int main(){
    char test[3] = "abc";
    for(int i = 0; i < 3; i++){
        for (int j = i+1; j < 3; j++){
            printf("%c ", test[j]);

        }
    }

}