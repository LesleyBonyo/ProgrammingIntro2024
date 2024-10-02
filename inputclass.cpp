#include<iostream>

using namespace std;

int main(){
    // get input from user
    int age;
    const double PI = 3.14;

    string yourName;
    cout << "What is your age?";
    cin >> age;
    cout << "What is your full name?";
    //cin >> yourName;
    cin.ignore();
    getline(cin, yourName);
    // display user age on the sreen
    cout<< yourName << " you are " << age << " years old";
    return 0;
}
