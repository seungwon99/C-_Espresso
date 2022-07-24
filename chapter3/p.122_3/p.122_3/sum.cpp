#include <iostream>
#include <cmath>
using namespace std;
const int number = 5;


double Average(int x[])
{
	double sum = 0;

	for (int i = 0; i < number; i++)
	{
		sum = sum + x[i];
	}

	double average = sum / number;

	return average;
}

double Standard_Deviation(int average, int x[])
{

	double sum = 0;

	for (int i = 0; i < number; i++)
	{
		sum = sum + pow((x[i] - average), 2);
	}

 
	double Standard_Deviation = sqrt(sum / number);
	
	return Standard_Deviation;
}


int main()
{
	int individual[number] = { 0 };
	
	for (int i = 0; i < number; i++)
	{
		cin >> individual[i];
	}

	double average = Average(individual);
	double standard_deviation = Standard_Deviation(average, individual);

	cout << "Average = " << average << endl;
	cout << "Standard Deviation = " << standard_deviation << endl;

}