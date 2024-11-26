#include<iostream>
using namespace std;
//pass by reference -pointer
int addTen(int* mypointer){
    *mypointer = *mypointer + 10;
    return *mypointer;
}
//pass by reference - address of operator &
int addFive(int &myvar){
    myvar = myvar + 5;
    return myvar;
}
int main(){
    int num = 20;
    addTen(&num);
    cout << "Value of num is " << num;
    addFive(num);
    cout << "Value of num is " << num;
    return 0;
}
