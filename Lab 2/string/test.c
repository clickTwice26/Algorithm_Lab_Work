#include <stdio.h>

int main(){

    char str1[5] = "hello";
    char str2[5];
    for (int i = 0; i < 5; i++){
        str2[i] = str1[i];
    }
    printf("From str2: ");
    for(int i =0; i < 5; i++){
        printf("%c", str2[i]);
    }
}