#include <iostream>
using namespace std;

int main()
{
	int hour, minute, second, total = 0;
	cout << endl << "Enter hour : ";
	cin >> hour;
	cout << endl << "Enter minute : ";
	cin >> minute;
	cout << endl << "Enter second : ";
	cin >> second;
	cout << endl << "Total : ";
	total = 60 * 60 * hour + 60 * minute + second;

	cout << total <<"seconds" <<endl;

}