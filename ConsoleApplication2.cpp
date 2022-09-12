
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int number;
	int arr[10000]{};
	int k = 0;

	cout << "Введите число:\n";
	cin >> number;

	for (int i = 1; i <= number; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				arr[k] += j;
			}
		}
		if (arr[k] == i)
		{
			k++;
		}
		else
		{
			arr[k] = 0;
		}
	}

	cout << "\nВсе совершенные числа от 1 до " << number <<":\n" << 1 << endl;

	for (int l = 0; l < k; l++)
	{
		cout << arr[l] << endl;
	}
}