#include<iostream>
using namespace std;

int getProduct(int num1, int num2, int num3){
    return num1 * num2 * num3;
}

int main(){
    //call a function
   cout << getProduct(10, 4, 9);

    return 0;
}

