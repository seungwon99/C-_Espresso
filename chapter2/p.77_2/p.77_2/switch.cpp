#include <iostream>
using namespace std;

int main()
{
	int x = 0;
	int y = 1;
	int z = 2;


	switch (x)		// x = 0;
	{
		case 0:	x = 1; y = 2;		// x = 1, y =2�� �Ǿ����ϱ� ���ÿ� case 1�� �̵�

		case 1: z = 3;				// z = 3
	}

	cout << "x = " << x << " , y = " << y << " , z = " << z << endl;

	// x = 1, y = 2, z = 3
}