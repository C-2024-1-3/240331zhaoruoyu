#include<iostream>
using namespace std;
class Chang {
private:int length;
	   int width;
	   int height;
public:void calculate(int l, int w, int h) {
	length = l; width = w; height = h;
	int V = l * w * h;
	cout << V << endl;
}
};
int main()
{
	cout << "�����һ��������ĳ����" << endl;
	Chang c1; int a, b, c; cin >> a; cin >> b;cin>> c;
	cout << "����ڶ���������ĳ����" << endl;
	Chang c2; int d, e, f; cin >> d; cin >> e;cin>> f;
	cout << "���������������ĳ����" << endl;
	Chang c3; int g, h, i; cin >> g; cin >> h;cin>> i;
	c1.calculate(a, b, c);
	c2.calculate(d, e, f);
	c3.calculate(g, h, i);

	system("pause");
	return 0;
}