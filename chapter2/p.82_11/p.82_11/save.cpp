#include <iostream>
using namespace std;

int save(int input)
{	
	static int account = 0;
	account = input + account;

	if (input == 0) { cout << "Quit" << endl; }
	else { cout << "There are currently " << account << "$ in the bank account." << endl; }
	
	return account;
}



int main()
{
	int amount;
	do 
	{
		cout<<endl <<endl << "Please enter the amount to be deposited  : ";
		cin >> amount;
		save(amount);
	} while (amount != 0);
	
}