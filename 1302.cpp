#include <iostream>
#include <vector>
using namespace std;
int main()
{
	system("chcp 1251 > nul");
	vector <int> numbers_to_N;
	int N;
	long long int factorial_N = 1;

	cout << "Введіть натуральне число: ";
	cin >> N;

	if (N <= 0 || N > 20)
	{
		cout << endl << "Цей код не може рахувати від'ємні числа або числа більше 20." << endl;
		return 0;
	}

		cout << endl << "Числа які використовуються для знаходження факторіала числа " << N << " - [ ";

	for (int a = 1; a <= N; a++)
	{
		numbers_to_N.push_back(a);
		cout << numbers_to_N[a - 1] << " ";
		factorial_N *= numbers_to_N[a - 1];	
	}

		cout << "]" << endl << endl << "Факторіал числа " << N << " = " << factorial_N << endl;

	return 0;
}