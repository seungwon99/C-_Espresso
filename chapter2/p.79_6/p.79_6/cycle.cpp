#include <iostream>
using namespace std;

int sum(int n)
{
	cout << n << endl;
	if (n < 1) return 1;
	else return (n + sum(n - 1));

	// n = 1�� �� return�� 1 + sum(0)�� ������
	// sum(0)�� 0�� ����ϰ� null�� �Ǹ鼭 ��������
	// n�� null���̱⿡ ���鸸 ��µǰ� ������ ���̴�.
}




int main()
{
	sum(5);
}