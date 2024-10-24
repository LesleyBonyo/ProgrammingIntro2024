#include<iostream>
#include<fstream>

using namespace std;
int main(){
    string username;
    int age;
    cout << "Enter your name";
    getline(cin, username);
    cout << "Enter your age";
    cin >> age;
    ofstream myfile;
    myfile.open("userdetails.txt");
    myfile << "Your name: " << username<< endl;
    myfile << "Your age: " << age;
    myfile.close();
        return 0;
}


