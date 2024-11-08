#include <iostream>
using namespace std;

int main(){
    int month;
    cout << "Enter month(from 1 to 12)" << endl;
    cin >> month;
    switch (month){
    case 1:
        cout << "January";
        break;
    case 2:
        cout << "Feb";
        break;
    case 3:
        cout << "Mar";
        break;
    default:
        cout << "3rd quarter of the year";
    }
    return 0;
}

