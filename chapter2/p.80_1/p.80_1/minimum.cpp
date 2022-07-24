#include <iostream>
using namespace std;

int get_minimum(int x, int y, int z);


int main()
{
	int x, y, z = 0;

	cout << "3개의 정수 x, y, z를 각각 입력받을 것입니다." << endl
		 << "x의 값을 입력해주세요 : ";
	cin >> x;

	cout << endl << "y의 값을 입력해주세요 : ";
	cin >> y;

	cout << endl << "z의 값을 입력해주세요 : ";
	cin >> z;

	cout << endl << endl <<"가장 작은 값은 " << get_minimum(x, y, z) << "입니다." << endl;
}

int get_minimum(int x, int y, int z)
{
	int minimum = 0;

	minimum = x;

	if (minimum > y)
	{
		if (y > z)
			minimum = z;

		else
			minimum = y;
	}

	else if (minimum <= y)
	{
		if (minimum > z)
			minimum = z;

		else minimum = x;
	}

	return minimum;
}