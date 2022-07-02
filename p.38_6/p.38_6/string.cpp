#include <iostream>
using namespace std;

int main()
{
	string name;
	string work;

	cout << "이름을 입력하세요 : ";
	cin >> name;
	cout << endl << name << "씨, 무엇을 해드릴까요? 할 일을 입력해주시겠어요? : ";
	cin >> work;
	cout << endl << "죄송합니다. " << work << "는 할 수 없습니다.";
}