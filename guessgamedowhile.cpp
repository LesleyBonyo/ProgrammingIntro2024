#include<iostream>

using namespace std;
int main(){
    //do while loop - guessing game
    int hiddennum = 7, guessednum=0;
    do{
        cout << "Guess a number" << endl;
        cin >> guessednum;
    } while(guessednum!=hiddennum);
    cout << "Winner";

    return 0;
}


