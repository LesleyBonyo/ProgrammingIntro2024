#include<iostream>
#include<fstream>>

using namespace std;
int main(){
    ifstream myfile;
    myfile.open("numbers.txt");
    int num1, num2, num3;
    myfile >> num1;
    myfile >> num2;
    myfile >> num3;
    ofstream myoutput;
    myoutput.open("output.txt");
    myoutput << "Sum is: "<< num1 + num2 + num3;
    myfile.close();
    myoutput.close();
    return 0;
}
