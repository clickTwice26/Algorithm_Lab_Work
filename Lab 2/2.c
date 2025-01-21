#include<stdio.h>

int main(){
    int testCase;
    scanf("%d", &testCase);
    int testCases[testCase];
    for (int i = 0; i < testCase; i++){
        scanf("%d", &testCases[i]);
    }
    for(int i = (testCase-1); i >= 0; i--){
        printf("%d ", testCases[i]);
    }

    return 0;
}
