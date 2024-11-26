#include<iostream>

using namespace std;
string myname = "John"; //global scope
int sumofrange(int num){ //num has a local scope
    if (num == 0){
        return 0;
    }
    return num + sumofrange(num-1);
}
int main(){
    cout << myname;
    int x;
    cout << "Enter number"<< endl;
    cin >> x;
    cout << sumofrange(x) << endl;
}
