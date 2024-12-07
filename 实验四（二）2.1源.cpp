#include<iostream>
#include<cstring>
using namespace std;

int indexof(const char* s1, const char* s2)
{
	const char* result = strstr(s2, s1);
		if (result != nullptr) {
			return result - s2;
		}
		else {
			return -1;
		}

}
int main()
{
	char s1[101]; char s2[101];
	cout << "ÊäÈë×Ö·û´®s1" << endl;
	
	cin.getline(s1,101);
	cout << "ÊäÈë×Ö·û´®s2" << endl;
	cin.getline(s2, 101);
	indexof(s1, s2);
	system("pause");
	return 0;
}