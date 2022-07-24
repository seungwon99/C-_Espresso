#include <iostream>
using namespace std;


double Average(double input)
{
	static int count = 0;
	static double sum = 0;
	if (input >= 0)	{sum = sum + input;	count++;}
	double average = sum / count;
	return average;
}

double Max(double input)
{
	static double max = 0;
	if (input > max) { max = input; }
	return max;
}


double Min(double input)
{
	static double min = 2147483647;
	if ((input < min)&&(input >= 0)) { min = input; }
	return min;
}


int main()
{
	double input;

	cout << "Please enter a number, however, if a negative number is entered, it will close." << endl;

	do {
		cout << endl << "Enter Number : ";
		cin >> input;

		if (input >= 0)
		{
			Average(input);
			Max(input);
			Min(input);
		}

		else break;

	} while (input >= 0);		

	cout << endl << "The average is " << Average(input);
	cout << endl << "The maximum is " << Max(input);
	cout << endl << "The minimum is " << Min(input) << endl;
}