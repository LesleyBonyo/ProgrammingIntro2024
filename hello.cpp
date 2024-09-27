//This is my first C++ Program

#include <iostream>

using namespace std;

int main(){
    // Declaring Variables
    int age = 21;
    string  studentName = "777";
    string course = "DBIT";
    double height; // declaring a variable called height
    height = 4.5; // assign it a value
    char myLetter = 'g';
    bool isRegistered = true;

    age = 66;
    cout << studentName << endl;
    cout << studentName << " is a student pursuing "<< course << endl;
    cout << "She is "<< age <<" years old\n";
    cout << course << " is one of the courses at Strathmore Institute.\n";
    cout << studentName << " completed high school and immediately joined the course at " << age;

    return 0;

}
