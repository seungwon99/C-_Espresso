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
		case 8:		cout << "backspace�� �Է��ϼ̽��ϴ�. "	<< endl; break;
		case 9:		cout << "tab�� �Է��ϼ̽��ϴ�. "		<< endl; break;
		case 13:	cout << "enter�� �Է��ϼ̽��ϴ�. "		<< endl; break;
		case 32:	cout << "space�� �Է��ϼ̽��ϴ�. "		<< endl; break;
		case 113:	exit(0);
		default:	cout << "����Ű�� �ƴմϴ�. "			<< endl; break;
	}
}
