#include <iostream>
using namespace std;

int main()
{
	double cm, feet, inch = 0;
	cin >> cm;
	inch = cm / 2.54;
	feet = inch / 12;

	cout << cm << "cm = " << inch << "inch = " << feet << "feet" << endl;
}