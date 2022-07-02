#include <iostream>
using namespace std;

int main()
{
	const double Korean_Square_Feet = 3.3058;
	int square_meter = 0;

	cout << "Enter the number of square meters" << endl << endl;
	cin >> square_meter;
	cout << endl << endl << square_meter << "m^2 = " 
		<< square_meter / Korean_Square_Feet << "Æò"<< endl;
}