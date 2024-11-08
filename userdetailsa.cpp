#include <iostream>
#include<fstream>

using namespace std;

int main(){
    string username;
    int age;
    cout << "What is your name?";
    getline(cin, username);
    cout << "What is your age?";
    cin >> age;
    ofstream userdetails;
    userdetails.open("userdetailsa.txt");
    userdetails << "Username: " << username << endl;
    userdetails << "Age: " << age;
    userdetails.close();

    return 0;
}
