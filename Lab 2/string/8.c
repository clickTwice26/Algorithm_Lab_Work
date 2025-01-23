#include <stdio.h>
int main(){
    char sentence[100];
    fgets(sentence, 100, stdin);
    char letterToReplce, replaceWith;
    scanf("%c %c", &letterToReplce, &replaceWith);
    for(int i = 0; sentence[i]!='\0'; i++){
        if (sentence[i] == letterToReplce){
            printf("%c", replaceWith);
        }else{
            printf("%c", sentence[i]);
        }
    }
}