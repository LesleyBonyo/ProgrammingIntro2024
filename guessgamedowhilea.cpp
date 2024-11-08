#include<iostream>

using namespace std;
int main(){
    //do while loop
    int hiddennum = 7, guessednum;
    do {
        cout << "Enter a number between 1 and 10" << endl;
        cin >> guessednum;
    } while (guessednum != hiddennum);

    cout << "Winner";

}
