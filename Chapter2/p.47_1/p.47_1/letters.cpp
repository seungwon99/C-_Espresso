#include <iostream>
using namespace std;

int main()
{
	int vowel = 0;
	int consonant = 0;		// 모음, 자음.
	int trash = 0;
	char ch;

	cout << "영문자를 입력하고 ctrl z를 입력하세요." <<endl;

	while (cin >> ch)
	{
		if ((65 <= (int)ch  && (int)ch <= 90) || (97 <= (int)ch && (int)ch <= 122))
		{
			switch (ch)
			{
				case'a':
				case'e':
				case'i':
				case'o':
				case'u':
				case'A':
				case'E':
				case'I':
				case'O':
				case'U':
					vowel++;
					break;

				default:		// 어떤 case 문과도 일치하지 못할 때 default가 된다.
					consonant++;
					break;
			}
		}


		else
			trash++;
	}

	cout << "모음 : " << vowel << endl;
	cout << "자음 : " << consonant << endl;
	cout << "기타 : " << trash << endl;

}