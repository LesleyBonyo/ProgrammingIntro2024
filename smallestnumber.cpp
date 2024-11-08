#include<iostream>

using namespace std;
int main(){
    int num1, num2;
    cout << "Enter two numbers" << endl;
    cin >> num1;
    cin >> num2;
    if (num1 < num2){
        cout << num1 << " is the smallest";
    } else if (num1 == num2){
        cout << "They are equal";
    } else {
        cout << num2 << " is the smallest";
    }
    return 0;
}
