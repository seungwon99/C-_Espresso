#include <iostream>
using namespace std;
//How to use Default Parameter

int calc_deposit(int salary = 100, int month = 12); // Default 100, 12


int main()
{
	cout << calc_deposit(200, 6) << endl;
	cout << calc_deposit(200) << endl;		//Default 200, 12
	cout << calc_deposit() << endl;				//Default 100, 12

	// �տ������͸� ����. ���� ���븸 ����Ʈ�� ���� ����.
}


int calc_deposit(int salary, int month)
{
	return salary * month;
}