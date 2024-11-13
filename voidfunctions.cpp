#include<iostream>
using namespace std;

//void functions
void hello(){ //declare a function
    cout << "Hello World"<< endl;
}
//void function with parameters
void helloUser(string user){
    cout << "Hello " << user << endl;
}
int main(){
    //call the function
    hello();
    hello();
    helloUser("Joel");
    helloUser("Amara");
    return 0;
}
