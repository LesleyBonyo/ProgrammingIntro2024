#include<iostream>
using namespace std;
int myvar = 56; // global scope

int sumofrange(int num){
    int var2 = 15; //local scope
    cout << myvar;
    return num + sumofrange(num-1);
    /*int oursum;
    for(int i=0; i<=num; i++){

        oursum = oursum + i;
    }
    return oursum;*/

}
int main(){
    cout << var2;
    int myrange = sumofrange(5);
    cout << myrange;
    cout << myvar;
    return 0;
}
