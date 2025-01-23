#include <stdio.h>

int main(){
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);
    int weightOfStr1 = 0, weightOfStr2 = 0;
    
    // checking the length;
    int lenStr1 = 0;
    int lenStr2 = 0;
    for (int i = 0; str1[i] != '\0'; i++){
        lenStr1++;
    }
    for (int i = 0; str2[i] != '\0'; i++){
        lenStr2++;
    }
    if(lenStr1 != lenStr2){
        printf("No, they are not anagrams.");
    }
    for (int i = 0; i < lenStr1; i++){
        weightOfStr1+=(int) str1[i];
        weightOfStr2+=(int) str2[i];
    }
    if(weightOfStr1 == weightOfStr2){
        printf("Yes, they are anagrams.");
    }
}