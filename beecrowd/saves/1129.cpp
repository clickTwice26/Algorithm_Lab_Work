#include <bits/stdc++.h>
using namespace std;

int main(){

    int questionAmount;
    int answerSheet[5];
    int totalAnswered = 0;
    int position = 0;
    char reply[5] = {'A', 'B', 'C', 'D', 'E'};
    while(true){
        cin >> questionAmount;
        if(questionAmount == 0){
            break;
        }
        for(int i = 0; i < questionAmount; i++){
            totalAnswered =0;
            position = 0;
            for(int j = 0; j < 5; j++){
                cin >> answerSheet[j];
            }
            for(int j = 0; j < 5; j++){
                if (answerSheet[j] <= 127){
                    totalAnswered++;
                    position = j;
                    // cout << answerSheet[j] << " " << totalAnswered << " " << position << endl;
                }
            }
            if (totalAnswered > 1 || totalAnswered == 0){
                cout << "*" << endl;
            }else{
                cout << reply[position] << endl;
            }


        }
    }


    return 0;
}