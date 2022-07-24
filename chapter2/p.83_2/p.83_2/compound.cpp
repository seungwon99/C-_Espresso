#include <iostream>
using namespace std;


int main()
{
	int principal;
	cout << "Please enter the principal amount. : ";
	cin >> principal;

	int balance = principal;
	
	cout << endl << "Please enter the annual interest rate as a percentage.. : ";
	double rate;
	cin >> rate;

	int i = 0;

	do { balance = balance * (1 + rate / 100);		i++;} 
	while (balance < 2 * principal);

	cout << endl  << "It will take " << i <<" years to reach double. ";

}