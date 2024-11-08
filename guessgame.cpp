
#include<iostream>

using namespace std;
int main(){
    int hiddennumber = 7, guessnum;
    cout << "Guess a number"<< endl;
    cin >> guessnum;
    while (guessnum != hiddennumber){
        cout << "Wrong number. Try again:"<<endl;
        cin >> guessnum;
    }

    return 0;
}

