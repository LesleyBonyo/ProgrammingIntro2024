#include<iostream>

using namespace std;

int main(){
    const double PI = 3.14;
    int radius, circumference, area;
    cout << "Enter radius: ";
    cin >> radius;
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    cout << "Area is " << area << endl;
    cout << "Circumference is " << circumference;
    return 0;
}
