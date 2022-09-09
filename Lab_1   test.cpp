
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	
	unsigned long long d = ULLONG_MAX, CalcLLInt, var; //Calc - расчетное, var просто для теста
	CalcLLInt = pow(2, 8 * sizeof(d)) - 1; // По данным Microsoft: pow не распознает
										   // целочисленные значения с плавающей запятой больше 2^64.

	cout << "Константа максимального значения для unsigned long long: " << d
		<< "\nРасчетное значение: " << CalcLLInt << endl;

	var = pow(2, 63);
	cout << endl << var << endl;

	var *= 2; //2^64
	cout << var << endl;

	var -= 1;
	cout << var << endl;
}