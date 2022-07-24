#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int Numbers[100] = { 0 }, Counter[10] = { 0 };
	int count = 0, max = 0, max_spot = 0;

	for (int i = 0; i < 100; i++)
	{
		Numbers[i] = rand() % 10;
		count = Numbers[i];
		Counter[count] += 1;
	}


	for (int j = 0; j < 10; j++)
	{
		cout << j << " : " << Counter[j] << endl;
		if (max < Counter[j]) { max = Counter[j]; max_spot = j; }
	}
	cout << endl << "The most frequent number is " << max_spot << endl;
	cout << endl << "Which appears " << max << " times. " << endl;
}