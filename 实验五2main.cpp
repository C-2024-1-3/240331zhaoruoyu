#include<iostream>
#include"student.h"
using namespace std;
int main()
{
	Student stud;
	
	stud.set_value(007, "tcg", 'm');
	stud.display();

	system("pause");
	return 0;
}