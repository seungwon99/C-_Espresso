#include <iostream>
using namespace std;

int get_minimum(int x, int y, int z);


int main()
{
	int x, y, z = 0;

	cout << "3���� ���� x, y, z�� ���� �Է¹��� ���Դϴ�." << endl
		 << "x�� ���� �Է����ּ��� : ";
	cin >> x;

	cout << endl << "y�� ���� �Է����ּ��� : ";
	cin >> y;

	cout << endl << "z�� ���� �Է����ּ��� : ";
	cin >> z;

	cout << endl << endl <<"���� ���� ���� " << get_minimum(x, y, z) << "�Դϴ�." << endl;
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