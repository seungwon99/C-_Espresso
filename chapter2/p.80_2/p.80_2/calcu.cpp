#include <iostream>
using namespace std;

int main()
{
	cout << "�����ȣ�� �����Ͻÿ�. : ";

	char opcode;
	cin >> opcode;

	cout << endl << " �� ���� �������� �и��Ͽ� �Է����ּ���. : ";
	float x, y = 0;

	cin >> x;
	cin >> y;

	float result;
	switch (opcode)
	{
	case '+' : 	result = x + y;		break;
	
	case '-' :	result = x - y;		break;

	case '*' :	result = x * y;		break;

	case '/' :
		result = x / y;		break;

	case '%' :
		result = (int)x % (int)y;
		break;
	}

	cout << endl << "result : " << result;
}