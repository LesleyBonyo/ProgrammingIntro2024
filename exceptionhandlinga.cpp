#include<iostream>
using namespace std;

int main(){
    try{
    int dividend, divisor, quotient;
    cout << "We want to divide 2 numbers\n";
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;
    if(divisor == 0){
            throw divisor;
        //cout << "Division by "<< divisor << " error";
    }/*
    while(divisor == 0){
        cout << "Division by "<< divisor << " error"<<endl;
        cout << "Enter another divisor"<<endl;
        cin >> divisor;
    }*/
    quotient = dividend/divisor;
    cout << dividend <<"/"<< divisor<< " is "<< quotient;
    }
    catch(int divisor){
        //cout << "Division by zero error";
        cout << "Divisor cannot be " << divisor;
    }

}

