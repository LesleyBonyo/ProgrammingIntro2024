#include<iostream>

using namespace std;

int main(){
    int radius, area, circumference;
    const double PI = 3.14;

    cout << "Enter radius:";
    cin >> radius;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    cout << "Circumference: " << circumference << endl;
    cout << "Area: " << area;
    return 0;
}
