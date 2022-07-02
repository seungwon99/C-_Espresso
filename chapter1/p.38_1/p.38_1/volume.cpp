#include <iostream>
using namespace std;

int main()
{
	int length = 0, width = 0, height = 0, volume = 0;

	cout << "Each value must not exceed 20."<<endl<<endl;

	do { cout << "Write Length : ";		cin >> length; }
	while (length >= 200 || length <= 1);	//while이 거짓이어야지 반복이 끊어진다. 
	// 두 조건 중 하나라도 True일 시에 다시 입력하게 하는 구조라서 원하는 바를 얻었다.


	do { cout << "Write Width : ";		cin >> width; } 
	while (width >= 200 || width <= 1);
	
	do { cout << "Write Height : ";		cin >> height; } 
	while (height >= 200 || height <= 1);

	volume = length * width * height;
	cout << endl << endl<< "Volume : " << volume;
}