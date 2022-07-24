#include "setup.h"

int attempt = 1;
int minimum_a = 1;


// 출력
void print(int attempt, int a, int b, int c)
{
	cout << "Case" << attempt << "	" << a << ", " << b << ", " << c << endl;
}

// 무지성으로 빗변 구하기. 

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



// 변 3개의 조합을 순서대로 배치하기.

void order(int a, int b, int c)
{
	int temp;
	if (b < c && b < a) { temp = a;	a = b;	b = temp; }
	if (c < a && c < b) { temp = a; 	c = a; c = temp; }
	if (b > c) { temp = b;  b = c; c = temp; }

	common_factor(a, b, c);
}



// 최대공약수로 나누기.
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




// 중복된 변들의 조합을 제거하기.

void overlap(int a, int b, int c)
{// 크기 순서대로 만들었고, 공약수도 다 날렸기 때문에
 // 가장 짧은 길이의 변이 같거나 작다면 그것은 중복이다.
	
	if (a > minimum_a)
	{
		minimum_a = a;
		print(attempt, a, b, c);
		attempt++;
	}
}