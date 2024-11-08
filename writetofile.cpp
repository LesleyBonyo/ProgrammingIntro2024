#include<iostream>
#include<fstream>

using namespace std;
int main(){
    // create and write into a file
    ofstream myfile;
    myfile.open("example.txt", ios::app);
    myfile << 44 ;
    myfile << "Added this to the file";
    myfile.close();
    return 0;
}
