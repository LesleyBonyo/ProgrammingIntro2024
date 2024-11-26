#include<iostream>
using namespace std;

int main(){
    //pointers
    int num = 5;
    //declaring pointers
    int* ptr;
    //get memory address
    cout << &num << endl;
    //initialize pointers
    ptr = &num;
    cout << ptr << endl;
    cout << *ptr;

}
