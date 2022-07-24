#include <iostream>
using namespace std;

int Players()
{
	cout << "How many players will participate ?  : ";
	int players;	cin >> players;
	return players;
}


int Total_Tokens()
{
	cout << endl <<"How many tokens will you play with?  : ";
	int tokens;		cin >> tokens;
	return tokens;
}

void GameLoop(int player, int tokens)
{
	int turns = 0;	// 몇 번째 턴인지, 누구의 차례인지를 알기 위함.
	int choose;

	do
	{
		cout << endl << "How many tokens will you take? : ";
		cin >> choose;

		if (choose > 0 && choose <= 3)
		{
			tokens = tokens - choose;
			++turns;
			int User = turns % player + 1;

			cout << endl << "Attempt " << turns + 1 << " : " 
				<< "Player " <<User<<"'s turn. "
				<< tokens << " tokens left" << endl;
		}

		else cout << "Retry. Each player may take 1 to 3 tokens per turn.";

	} while (tokens > 1);

}

int main()
{
	int player = Players();
	int tokens = Total_Tokens();

	//Intro
	cout << endl << "Each player may take 1 to 3 tokens per turn.";
	GameLoop(player, tokens);
}