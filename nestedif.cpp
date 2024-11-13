#include <iostream>
using namespace std;

int main(){
    int english, maths;
    cout << "Enter marks for english and maths" << endl;
    cin >> english;
    cin >> maths;
    if (english>=50){
        if (maths >= 50){
            cout << "You have passed";
        } else{
            cout << "You have failed";
        }
    } else {
        cout << "You have failed";
    }
    return 0;
}
