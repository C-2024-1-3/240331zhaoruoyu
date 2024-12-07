#include<iostream>
const int MAX = 80;
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	int i = 0, j = 0, k = 0;
	while(i<size1&&j<size2){
		if (list1[i] < list2[j])
		{
			list3[k++] = list1[i++];
		}
		else {
			list3[k++] = list2[j++];
		}
		while (i < size1) {
			list3[k++] = list1[i++];
		}
		while (j < size2) {
			list3[k++] = list2[j++];
		}}}
int main()
{  int size1, size2;
	cout << "输入1数组元素个数" << endl;
	cin >> size1;
	cout << "输入1数组元素"<<endl;
	int list1[MAX];
	for (int i = 0; i < size1; i++) {
		cin >> list1[i];
	}
	cout << "输入2数组元素个数" << endl;
	cin >> size2;
	cout << "输入2数组元素"<<endl;
	int list2[MAX];
	for (int i = 0; i < size2; i++) {
		cin >> list2[i];}
	int list3[MAX * 2];
	merge(list1, size1, list2, size2, list3);
	for (int i = 0; i < size1 + size2; i++) {
		cout << list3[i] << " ";
	}
	system("pause");
	return 0;
}