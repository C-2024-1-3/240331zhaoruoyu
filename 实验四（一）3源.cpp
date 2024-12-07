#include<iostream>
using namespace std;
int main()
{
	bool arr[100];
	for (int i = 0; i < 100; i++)
	{
		arr[i] =true;
	}
	for (int j= 1; j< 100; j++)
	{
		for (int m = 0; j + m * (j + 1) < 100; m++) {
			if (arr[j + m * (j + 1)] == true) {
				arr[j + m * (j + 1)] = false;
			}
			else {
				arr[j + m * (j + 1)] = true;
			}
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (arr[i]== true) {
			cout << i+1<<" ";
		}
	}
	system("pause");
	return 0;
}