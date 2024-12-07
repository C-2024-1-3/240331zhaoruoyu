#include<iostream>
#include<iomanip>
#include"abc.h"
using namespace std;

int main()
{
	double celsius[] = { 40.0,39.0,31.0 };
	double fahrenheit[] = {120.0,110.0,30.0};
	cout << "Celsius\tFahrenheit|Fahrenheit\tCelsius " << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << fixed << setprecision(1) << celsius[i] << "\t" <<celsius_to_fah(celsius[i]) << "\t|\t" << fahrenheit[i] <<"\t"<<fixed<< setprecision(2) << fahrenheit_to_cels(fahrenheit[i]) << "\t" << endl;
	}

	system("pause");
	return 0;
}