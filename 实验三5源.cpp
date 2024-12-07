#include<iostream>
using namespace std;
int number(int a,int depth=0)
{   
	if (depth == 10) {
		return a;
	}
	int sum = a * 2 + 1;
	a = sum;

	return number(sum, depth + 1);
}
int main()
{
	
	cout<<number(1)<<endl;
	system("pause");
	return 0;
}