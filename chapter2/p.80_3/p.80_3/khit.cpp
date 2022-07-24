#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void operation(int opcode);


int main()
{
	static char opcode;
	do{ char opcode = _getch();	operation(opcode); } while (opcode !=  113);
}


void operation(int opcode)
{
	switch (opcode)
	{
		case 8:		cout << "backspace를 입력하셨습니다. "	<< endl; break;
		case 9:		cout << "tab을 입력하셨습니다. "		<< endl; break;
		case 13:	cout << "enter를 입력하셨습니다. "		<< endl; break;
		case 32:	cout << "space를 입력하셨습니다. "		<< endl; break;
		case 113:	exit(0);
		default:	cout << "공백키가 아닙니다. "			<< endl; break;
	}
}
