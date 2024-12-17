#include<iostream>
using namespace std;
class Student {
public:
    int arr[3][2];
    void max() {
		int* p = &arr[0][1];
		if (arr[0][1] < arr[1][1]) {
			p = p + 2;
			if (arr[1][1] < arr[2][1]) {
				p = p + 2;
			}
			else {}}
		else {
			if (arr[2][1] > arr[1][1]) {
				p = p + 4;
			}
			else {}}
		cout << *(p - 1) << endl;
	}};
	int main() {
		Student stu;
		cout << "请输入三人的学号和成绩" << endl;
		stu.arr;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 2; j++) {
				cin >> stu.arr[i][j];
			}}
        stu.max();
		system("pause");
		return 0;
	}
