#include<iostream>
using namespace std;
//void main()
//{
//	int i, j, * pi, * pj;
//	pi = &i;
//	pj = &j;
//	i = 5; j = 7;
//	cout << i << '\t' << j << '\t' << pj;
//	cout << &i << '\t' << *&i << '\t' << &j << '\t' << *&j;
//	system("pause");
//
//	
//}
//int main()
//{
//	int a[] = { 1,2,3 };
//	int * p, i;
//	p = a;
//	for (i = 0; i < 3; i++)
//		printf("%d,%d,%d,%d\n", a[i], p[i], *(p + i), *(a + i));
//	system("pause");
//	return 0;
//}
#include"stdio.h"
void f(char* st, int i)
{
	st[i] = '\0';
	cout << st; 
	if (i > 1) f(st, i - 1);
}
void main()
{
	char st[] = "abcd";
	f(st, 4);
	system("pause");
}