#include<iostream>
using namespace std;
int main(){
    int hiddenNum = 7, guessednum=0;
    //for loop
    for (int n=1; n<=6; n++){
       cout << "Guess a number" << endl;
       cin >> guessednum;
       if (guessednum != hiddenNum){
            continue;
            //cout << "Wrong answer. Try again" << endl;
       } else {
            cout << "Winner";
            break;
       }
    }
    return 0;
}
