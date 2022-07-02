#include <iostream>
using namespace std;

int main()
{	/*
	double f_temp = 60;
	double c_temp = 0;

	c_temp = (f_temp - 32) * (float)5/9;
	cout << "Celsius = " << c_temp << endl;
*/

	double f_temp;
	double c_temp = 60;

	f_temp = (float)9/5 * c_temp  + 32;	
	cout << "Fahrenheit = " << f_temp << endl;

}