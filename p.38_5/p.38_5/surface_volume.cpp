#include <iostream>
using namespace std;

int main()
{
	const double Pi = 3.14;
	double radius = 0;
	double surface_area, volume = 0;
	cout << "Enter radius : ";
	cin >> radius;

	surface_area = 4 * Pi * radius * radius;
	volume = surface_area * radius / 3;

	cout<<endl << "Surface Area = " << surface_area <<endl;
	cout << "Volume = " << volume << endl;
}