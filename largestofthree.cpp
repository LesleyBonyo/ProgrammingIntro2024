#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3;
    cout << "enter three numbers "<< endl;
    cin >>num1>>num2>>num3;
    if (num1> num2){
        if (num1>num3){
            cout << "largest " << num11
            } else {
            cout << "largest " << num3;
            }
    } else if (num2>num3){
        cout << "largest: " << num2;
    } else{
        cout << "largest: " << num3;
    }
    return 0;
}

