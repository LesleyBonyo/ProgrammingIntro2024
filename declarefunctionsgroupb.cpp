#include<iostream>
using namespace std;
string fullname(string fname, string lname);
int main(){
    string myname;
    myname = fullname("Jane","Kamau");
    cout << myname;
    cout << fullname("Samuel", "Trevor");
    return 0;
}
string fullname(string fname, string lname){
    return fname + " " + lname;
}

