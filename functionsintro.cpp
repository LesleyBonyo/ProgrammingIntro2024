#include<iostream>
using namespace std;

//function to add two numbers
int addTwoNumbers(){
    int num1 = 3;
    int num2 = 5;
    return num1 + num2;

}
// function with parameters
int findSum(int num1, int num2){
    return num1 + num2;
}
// function to find product of 3 numbers
int findproduct(int x, int y, int z){
    return x * y * z;
}

int main(){
    // calling a function
    int result = addTwoNumbers();
    cout << addTwoNumbers() << endl;
    //call a function with parameters
    cout << findSum(50, 67);
    return 0;
}
