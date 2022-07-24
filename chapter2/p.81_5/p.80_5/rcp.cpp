#include <iostream>
#include <cstdlib>

using namespace std;

int user()
{
	int input;
	cout<< "What's your choice? : ";
	cin >> input;
	return input;
}

int computer()
{
	int response = rand() % 3 + 1;
	return response;
}

int Judge(int user, int computer)
{
	int WinLose;	// 비기면 0, 유저가 이기면 1, 컴퓨터가 이기면 2;

	if (user == computer) { WinLose = 0; }
	else if (user == 1 && computer == 2) { WinLose = 1; }
	else if (user == 2 && computer == 3) { WinLose = 1; }
	else if (user == 3 && computer == 1) { WinLose = 1; }
	else WinLose = 2;

	return WinLose;
}

void notice(int WinLose)
{
	if (WinLose == 0) { cout << endl << "Draw! Regame!" << endl <<endl; }
	if (WinLose == 1) { cout << endl << "Victory!" << endl; }
	if (WinLose == 2) { cout << endl << "Lose!" << endl; }
}


int main()
{
	int WinLose;
	cout << "It is a rock-paper-scissors game." << endl
		<< "Please enter 1 for scissors, 2 for rock, and 3 for paper." << endl;

	do 
	{
		// Attempt Counter
		static int i = 1;
		cout<< endl << "Attempt " << i << endl;
		i++;


		// Game
		int user_move = user();
		int computer_move = computer();
		WinLose = Judge(user_move, computer_move);
		notice(WinLose);
	}

	while (WinLose != 1);		// 이길 때까지.

}