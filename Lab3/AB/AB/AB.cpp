#include <iostream>
#include <locale>
#include "Windows.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	int A, B, temp;
	std::cout << "Введите целое значение А ";
	std::cin >> A;
	std::cout << "Введите целое значение В ";
	std::cin >> B;
	std::cout << "A = " << A << "\t" << "B = " << B << "\n";

	if (A > B)
	{
		temp = A;
		A = B;
		B = temp;
		std::cout << "A = " << A <<  "\t" << "B = " << B;
	}

	else
	{
		std::cout << "A = " << A << "\t" << "B = " << B;
	}

	return 0;
	system("PAUSE");

}
