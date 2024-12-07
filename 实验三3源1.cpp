#include<iostream>
using namespace std;
double celsius_to_fah(double cel)
{
	double a= cel * 1.8 + 32.0;
	
	return a;
}
double fahrenheit_to_cels(double fah)
{
	double b = (fah - 32.0) / 1.8;
	
	return b;
}