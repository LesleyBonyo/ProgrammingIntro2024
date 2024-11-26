#include<iostream>

using namespace std;
int main(){
    //arrays
    //declaring and initialize arrays
    string students[3] = {"Mary","Joel", "Clara"};
    cout << "This is " << students[1];
    for(int i=0; i<3; i++){
        cout << "This is " << students[i]<< endl;
    }
    // array example - declare array
    int marks[4];
    marks[0] = 30;
    marks[1] = 50;
    marks[2] = 70;
    marks[3] = 20;
    // 3rd example
    int ages[3];
    cout << "Enter ages of 3 students";
    cin >> ages[0] >> ages[1] >> ages[2];
    cout << ages[1];

    return 0;

}
