// C++ code to demonstrate
// the working of setw() function
#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;

int main()
{

	// Initializing the integer
	int num = 50;

	cout << "Before setting the width: \n" << num << endl;

	// Using setw()
	cout << "Setting the width"
		<< " using setw to 5: \n"
		<< setw(2);

	cout << num;

	return 0;
}
