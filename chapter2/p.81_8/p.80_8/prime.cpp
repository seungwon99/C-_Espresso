#include <iostream>
using namespace std;

int prime(int number)
{
	int Judge = 0;

	for (int i = 2; i < number; i++)
	{
		if (number %  i == 0)		// 1�� �����ϰ� �����  2�� �̻��̸� �Ҽ��� �ƴ�.
		{Judge++;}

		if (number == i * i)		// ����� �ϳ����� ������ ���� ������ �ش� ��� ���.
		{Judge++;}
	}

	if (Judge < 1) { return number; }
	
	else return 0;
}


int main()
{
	int Maximum = 100;
	int count = 0;

	for (int number = 2; number <= Maximum; number++)
	{
		int Prime = prime(number);

		if (Prime != 0)
		{
			cout <<" "<< Prime;
			count++;
		}
	}
	
	cout << endl << endl << "Count : " << count;
}