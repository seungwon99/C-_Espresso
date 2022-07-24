#include <iostream>
#include <cstdlib>
using namespace std;

int intro()
{
	cout << "Welcome to the lottery.Please choose a number from 1 to 100. : ";
	int input;
	cin >> input;
	return input;
}

int get_number()
{
	int Win = rand() % 100 + 1;	// 1부터 100이니까
	return Win;
}

void Judge(int input, int Win)
{
	if (input == Win)	{cout << "Congratulations. It's a win."<< endl;}

	else {cout << "Sorry. The winning number is " << Win << endl;}
}

int main()
{
	int input = intro();
	int Win = get_number();
	Judge(input, Win);
}