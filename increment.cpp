#include<iostream>

using namespace std;

int main(){
    int counting = 7;
    cout << "Original value: " << counting << endl;
    cout << "Using ++counting: " << ++counting << endl;
    cout << "After ++counting: " << counting << endl;
    cout << "Using counting++: " << counting++ << endl;
    cout << "After counting++: " << counting << endl;

    return 0;
}

