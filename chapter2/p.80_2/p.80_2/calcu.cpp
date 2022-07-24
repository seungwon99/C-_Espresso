#include <iostream>
using namespace std;

int main()
{
	cout << "연산기호를 선택하시오. : ";

	char opcode;
	cin >> opcode;

	cout << endl << " 두 수를 공백으로 분리하여 입력해주세요. : ";
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