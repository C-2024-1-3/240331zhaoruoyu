#include<iostream>
using namespace std;
int paraseHex(const char* const hexString)
{
	long a = strtol(hexString, nullptr, 16);
	cout << "ת��Ϊʮ������" << a << endl;
	return a;
}
int main() {
	cout << "������һ��ʮ�����Ƶ���" << endl;
	char a[101];
	cin.getline(a, 101);
 char* hexString = a;
	paraseHex( hexString);
	system("pause");
	return 0;
}