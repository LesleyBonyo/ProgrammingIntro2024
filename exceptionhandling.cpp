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
    }
   /* while(divisor == 0){
        cout << "Error: division by zero"<<endl;
        cout << "Enter another divisor: ";
        cin >> divisor;
    }*/
    quotient = dividend/divisor;
    cout << dividend <<"/"<< divisor<< " is "<< quotient;
}
catch(int divisor){
    //statement to be executed if there's an error
    cout << "Division by " << divisor << " error";
}
}
