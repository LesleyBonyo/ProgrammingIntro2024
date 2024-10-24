#include<iostream>
#include<fstream>

using namespace std;
int main(){
    //read from a file
    ifstream yourfile;
    string yourname, lastsentence;
    int num1, num2; //going to store value read from file
    yourfile.open("example.txt"); //open file
    //yourfile >> yourname;
    getline(yourfile, yourname);
    yourfile >> num1; // read from file and store value in the num variable
    yourfile >> num2;
    yourfile.ignore();
    getline(yourfile, lastsentence);
    //cout << "read from file: "<< num;
    cout << yourname << ": Sum of the numbers: " << num1+num2 << endl;
    cout << lastsentence;
    yourfile.close();
    return 0;
}
