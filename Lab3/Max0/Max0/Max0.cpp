#include <iostream>
#include <locale>
#include "Windows.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	int A, B;
	std::cout << "Введите целое значение А ";
	std::cin >> A;
	std::cout << "Введите целое значение В ";
	std::cin >> B;
	std::cout << "A = " << A << "\t" << "B = " << B << "\n";

	if (A == B)
	{
		std::cout << "Значение А должно отличаться от значения В";
	}

	else
	{
		if (A > B)
		{
			std::cout << "Max (" << A << ", " << B << ") = " << A;
		}

		else
		{
			std::cout << "Max (" << A << ", " << B << ") = " << B;
		}
	}

	return 0;
	system("PAUSE");

}
