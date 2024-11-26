#include<iostream>

using namespace std;
int sumofelementsofanarray(int marks[5]){
    int total = 0;
    for(int i=0; i<5; i++){
        total = total + marks[i];
    }
    return total;
}
int main(){
    int example[5] = {50,35,67,88,10};
    cout << "Total sum is " <<sumofelementsofanarray(example);

}

