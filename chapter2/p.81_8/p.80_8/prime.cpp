#include <iostream>
using namespace std;

int prime(int number)
{
	int Judge = 0;

	for (int i = 2; i < number; i++)
	{
		if (number %  i == 0)		// 1을 제외하고 약수가  2개 이상이면 소수가 아님.
		{Judge++;}

		if (number == i * i)		// 약수가 하나여도 제곱일 수가 있으니 해당 경우 고려.
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