#include<iostream>
using namespace std;

int max(int num1,int num2, int num3){
    if(num1>num2 && num1> num3){
        return num1;
    } else if(num2>num1 && num2>num3) {
        return num2;
    } else {
        return num3;
    }
}
int main(){
    int x, y, z;
    cout << "Enter 3 numbers to find the max"<< endl;
    cin >> x>>y>>z;
    cout << "The max is " << max(x,y,z);
    return 0;
}

