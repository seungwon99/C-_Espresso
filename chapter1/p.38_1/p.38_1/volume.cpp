#include <iostream>
using namespace std;

int main()
{
	int length = 0, width = 0, height = 0, volume = 0;

	cout << "Each value must not exceed 20."<<endl<<endl;

	do { cout << "Write Length : ";		cin >> length; }
	while (length >= 200 || length <= 1);	//while�� �����̾���� �ݺ��� ��������. 
	// �� ���� �� �ϳ��� True�� �ÿ� �ٽ� �Է��ϰ� �ϴ� ������ ���ϴ� �ٸ� �����.


	do { cout << "Write Width : ";		cin >> width; } 
	while (width >= 200 || width <= 1);
	
	do { cout << "Write Height : ";		cin >> height; } 
	while (height >= 200 || height <= 1);

	volume = length * width * height;
	cout << endl << endl<< "Volume : " << volume;
}