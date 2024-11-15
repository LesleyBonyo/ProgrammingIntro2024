#include<iostream>
using namespace std;

string fullname(string fname, string lname){

    return fname + " " + lname;
}
int main(){
    //call our function
    cout << fullname("Cindy", "Imani");
    string fname, lname;
    cout << "Enter your first and last name"<< endl;
    cin >> fname >> lname;
    //call our function
    cout << fullname(fname, lname);
}
