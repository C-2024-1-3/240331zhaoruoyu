#include<iostream>
#include<cstring>
#include"student.h"
using namespace std;
void Student::display()
{
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}
void Student:: set_value(int num, const char* name, char sex) {
	this->num = num; strcpy_s(this->name,sizeof(this->name),name); this->sex = sex;
}
