#include <iostream>
#include <cmath>

using namespace std;

float dist_2d(int x1, int y1, int x2, int y2)
{
	float distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

	return distance;
}


int main()
{
	int x1, x2, y1, y2 = 0;

	cout	<< "Enter the starting point on the 2D plane." << endl
			<< "Enter the x-coordinate first," << endl
			<< "then press the space bar and enter the y-coordinate." << endl
			<< "Starting Point : ";
	cin >> x1; cin >> y1;

	cout << endl << "End Point : ";
	cin >> x2; cin >> y2;

	float Distance = dist_2d(x1, y1, x2, y2);
	cout << endl << "Distance = " << Distance;
}