#include<iostream>

using namespace std;
int main(){
    int hiddennum = 7, guessednum = 0;
    cout << "Guess a number" << endl;
    cin >> guessednum;
    while (guessednum != hiddennum){
        cout << "Wrong answer. Try again" << endl;
        cin >> guessednum;
    }

}

