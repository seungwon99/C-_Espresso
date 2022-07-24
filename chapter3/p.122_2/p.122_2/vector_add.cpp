#include <iostream>
using namespace std;

void vector_add(int x[3], int y[3])
{
	int Sum[3] = { 0 };

	for (int i = 0; i < 3; i++)
	{
		Sum[i] = x[i] + y[i];
		cout <<" "<< Sum[i];
	}
}


int main()
{
	int X[3] = { 1, 2, 3 };
	int Y[3] = { 0, 1, 2 };
	int Sum[3] = { 0, 0, 0 };

	vector_add(X, Y);
}
