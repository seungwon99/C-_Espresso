#include "setup.h"

int attempt = 1;
int minimum_a = 1;


// ���
void print(int attempt, int a, int b, int c)
{
	cout << "Case" << attempt << "	" << a << ", " << b << ", " << c << endl;
}

// ���������� ���� ���ϱ�. 

void right(int a, int b)
{
	for (int c = 1; c < Limit; c++)
	{
		if (c * c == a * a + b * b)
		{ 
			order(a, b, c);		
		}
	}
}



// �� 3���� ������ ������� ��ġ�ϱ�.

void order(int a, int b, int c)
{
	int temp;
	if (b < c && b < a) { temp = a;	a = b;	b = temp; }
	if (c < a && c < b) { temp = a; 	c = a; c = temp; }
	if (b > c) { temp = b;  b = c; c = temp; }

	common_factor(a, b, c);
}



// �ִ������� ������.
void common_factor(int a, int b, int c)
{
	int max_div = 1;

	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0 && b % i == 0 && c % i == 0)
		{max_div = i;}
	}

	a = a / max_div;
	b = b / max_div;
	c = c / max_div;

	overlap(a, b, c);
}




// �ߺ��� ������ ������ �����ϱ�.

void overlap(int a, int b, int c)
{// ũ�� ������� �������, ������� �� ���ȱ� ������
 // ���� ª�� ������ ���� ���ų� �۴ٸ� �װ��� �ߺ��̴�.
	
	if (a > minimum_a)
	{
		minimum_a = a;
		print(attempt, a, b, c);
		attempt++;
	}
}