#include<iostream>
using namespace std;
bool reset(int a,int p[])
{
	for (int j = 0; j < a - 1; j++) {
		for (int i = 0; i < a - 1; i++) {
			if (p[i] > p[i + 1]) {
				int temp = p[i];
				p[i] = p[i + 1];
				p[i + 1] = temp;
}}}
	return true;}
int main()
{   int a;
	int* p = nullptr;
	cout << "�������������" << endl;
	cin >> a;
	p = new int[a];
	cout << "����������Ԫ��" << endl;
	for (int i = 0; i < a; i++) {
		cin >> p[i];
	}
	cout <<"ָ��ָ�������ǣ�" << *p << endl;
	reset(a, p);
	for (int i = 0; i < a; i++) {
		cout << p[i] << endl;
	}
	
		delete[]p;
	system("pause");
	return 0;
}