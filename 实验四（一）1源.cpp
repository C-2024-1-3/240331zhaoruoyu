#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	cout << "������ʮ����" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	cout << "������в�ͬ����Ϊ" << endl;
	for (int i = 0; i < 10; i++)
	{
		int b = 0;
		for (int a = 0; a <i; a++)
		{
			if (arr[i]==arr[a]) {
				b++;
			}
		
		}
		if (b ==0) {
			cout << arr[i] << endl; 
			
		}
	}
	
	
	system("pause");
	return 0;
}