#include <iostream>
#include <cmath>
using namespace std;

void quad_eqn(int a, int b, int c)
{
	double D = b * b - 4 * a * c;

	if (D > 0) 
	{
		double Answer1 = (-b + sqrt(D)) / (2 * a);
		double Answer2 = (-b - sqrt(D)) / (2 * a);

		cout <<endl << "The solutions to the equation are " << Answer1 << " and " << Answer2 <<endl;
		// ±Ù 2°³
	}
	if (D == 0)
	{
		double Answer3 = -b / (2 * a);
		cout <<endl << "The solution to the equation is " << Answer3 << endl;
	}

	if (D < 0)
	{
		cout <<endl << "This equation does not have a solution to real numbers." << endl;
	}
}



int main()
{
	cout << "Enter the coefficients of the quadratic equation." << endl;
	double a, b, c = 0;
	cout<<endl << "a : "; cin >> a;
	cout<<endl << "b : "; cin >> b; 
	cout<<endl << "c : "; cin >> c;

	quad_eqn(a, b, c);
}