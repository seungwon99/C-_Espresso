#include <iostream>
using namespace std;

int sum(int n)
{
	cout << n << endl;
	if (n < 1) return 1;
	else return (n + sum(n - 1));

	// n = 1일 때 return이 1 + sum(0)이 나오고
	// sum(0)이 0을 출력하고 null이 되면서 마지막에
	// n이 null값이기에 공백만 출력되고 끝나는 것이다.
}




int main()
{
	sum(5);
}