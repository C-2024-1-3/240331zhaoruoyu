#include<iostream>
using namespace std;
int main()
{
	float arr[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	for (int j = 0; j < 9; j++)
	{
		for (int i = 0; i < 9; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
			
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout <<arr[i]<<" ";
	}
	
	system("pause");
	return 0;
}