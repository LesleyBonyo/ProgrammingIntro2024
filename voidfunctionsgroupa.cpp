#include<iostream>
using namespace std;
//void functions
void helloWorld(){
    cout << "Hello world" << endl;
}
// with parameters
void helloUser(string fullname){
    cout << "Hello " << fullname << endl;
}
// declare the function
void welcome();
int main(){
    //call a function
    helloWorld();
    helloWorld();
    helloUser("Amani Amara");
    helloUser("Joel Kamau");
    welcome();
    return 0;
}
void welcome(){
    cout << "welcome";
}
