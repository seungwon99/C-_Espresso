#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter n : ";
	cin >> n;

	// �������� �� ����
	int Sum = n * n * (n + 1) * (n + 1) / 4;
	cout<<endl << "Sum = " << Sum << endl;
}