#include<iostream>
#include<algorithm>
using namespace std;
int sma(int m, int n)
{
	int a = max(m, n);
	int b = min(m, n);
	int c = a % b;
	while (c != 0)
	{   a = b;
		b = c;
		c = a % b;}
	return b;}
int big(int m, int n)
{
	int a = 1;
		while (a % m != 0 || a % n != 0)
		{
			a++;}
	return a;}
int main()
{
	int m;
	int n;
	cout << "���Ⱥ�������Ȼ��m,n��ֵ" << endl;
	cin >> m;
	cin >> n;
	cout << "���Լ��Ϊ��" << sma(m, n) << endl;
	cout << "��С������Ϊ��"<<big(m, n) << endl;
	system("pause");
	return 0;
}