#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
	const char* found = strstr(s2, s1);
	if (found != nullptr) {
		return found - s2;

	}
	else {
		return -1;
	}
}
int main() {

	char s1[101], s2[101];
	cout << "�����һ���ַ���" << endl;
	cin.getline(s1, 101);
	cout << "����ڶ����ַ�" << endl;
	cin.getline(s2, 101);
	int a = indexOf(s1, s2);
	if(a!=-1){
		cout << "1��2���Ӵ�" << endl;
	}
	else {
		cout << "1����2���Ӵ�" << endl;
	}
	system("pause");
	return 0;
}