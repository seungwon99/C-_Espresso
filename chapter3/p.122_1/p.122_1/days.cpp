#include <iostream>
using namespace std;

int main()
{
	int days[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	for (int month = 1; month <= 12; month++)
	{
		cout << month << "���� " << days[month - 1] << "�ϱ��� �ֽ��ϴ�. " << endl;
	}
}