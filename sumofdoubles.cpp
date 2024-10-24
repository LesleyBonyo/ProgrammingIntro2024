#include<iostream>
#include<iomanip>

using namespace std;
int main(){
    double num1 = 45.2345671234568;
    double num2 = 23.3268933757884;

    double sum = num1 + num2;
    cout << "The sum is "<< setfill('#')<<setw(18)<<fixed<<setprecision(13)<<sum;

    return 0;
}
