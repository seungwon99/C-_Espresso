#include <iostream>
using namespace std;

int main()
{
	int vowel = 0;
	int consonant = 0;		// ����, ����.
	int trash = 0;
	char ch;

	cout << "�����ڸ� �Է��ϰ� ctrl z�� �Է��ϼ���." <<endl;

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

				default:		// � case ������ ��ġ���� ���� �� default�� �ȴ�.
					consonant++;
					break;
			}
		}


		else
			trash++;
	}

	cout << "���� : " << vowel << endl;
	cout << "���� : " << consonant << endl;
	cout << "��Ÿ : " << trash << endl;

}