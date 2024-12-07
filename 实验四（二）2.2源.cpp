#include<iostream>
using namespace std;
int paraseHex(const char* const hexString)
{
	long a = strtol(hexString, nullptr, 16);
	cout << "转化为十进制是" << a << endl;
	return a;
}
int main() {
	cout << "请输入一个十六进制的数" << endl;
	char a[101];
	cin.getline(a, 101);
 char* hexString = a;
	paraseHex( hexString);
	system("pause");
	return 0;
}