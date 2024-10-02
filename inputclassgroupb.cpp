#include<iostream>

using namespace std;

int main(){
    int age;
    //string firstName;
    string fullName;

    cout << "How old are you?";
    cin >> age;
    //cin.ignore();
    cout << "What is your full name?";
    getline(cin, fullName);

    cout << fullName << " You are " << age << " years old.";
    return 0;
}
