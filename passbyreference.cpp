#include <iostream>
using namespace std;


void increment(int* ptr) {
    *ptr += 1;
}

int main() {
    int value = 10;

    cout << "Before function call: " << value << endl;

    increment(&value);

    cout << "After function call: " << value << endl;

    return 0;
}





