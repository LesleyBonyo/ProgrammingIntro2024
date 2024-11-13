#include<iostream>
using namespace std;
int main(){
    //nested for loop
    for (int i=0; i<3; i++){
            cout << "first for loop" << endl;
        for (int j=0; j<2; j++){
            cout << "Inside the for loop" << endl;
        }
    }

    return 0;
}
