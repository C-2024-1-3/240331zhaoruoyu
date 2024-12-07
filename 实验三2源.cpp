#include<iostream>
using namespace std;
bool is_prime(int num, int& i)
{
	int a;
	for (a = 2; num % a != 0; a++)
	{ }
	if (a == num)
	{
		i++;
		cout << num <<" ";
		return true;
	}
	else {
       return false;
	}
}
int main(){
	
	int num=0 ;
	int i = 0;
	for (int a = 0; i < 200; a++, num++) {
		if (is_prime(num, i)) {
			if (i % 10 == 0) {
				cout << endl;
			}

		}
	}
	system("pause");
	return 0;
}