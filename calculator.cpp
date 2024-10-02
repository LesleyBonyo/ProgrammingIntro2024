#include<iostream>

using namespace std;

 int main(){
    //arithmetic operators
    int num1, num2, sum, difference, product, remainder;
    double quotient;
    cout << "Enter number 1:";
    cin >> num1;
    cout << "Enter number 2:";
    cin >> num2;
    //num1 = 10;
    //num2 = 3;
    //addition
    sum = num1 + num2;
    cout << "The sum is: " << sum << endl;
    //subtraction
    difference = num1 - num2;
    cout << "The difference is: " << difference << endl;
    //multiplication
    product = num1 * num2;
    cout << "The product is: " << product << endl;
    //division
    quotient = num1/num2;
    cout << "The quotient is: " << quotient << endl;
    //modulus
    remainder = num1%num2;
    cout << "The remainder is: " << remainder << endl;
    return 0;
 }
