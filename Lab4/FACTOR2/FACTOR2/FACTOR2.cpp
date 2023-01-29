#include <iostream>
#include <locale>
#include "Windows.h"

int factorial(int);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	int a;
	std::cout << "N = ";
	std::cin >> a;

	if (isalpha(a))
	{
		std::cout << "N должно быть числом";
		return 0;
	}

	if (a <= 0)
	{
		std::cout << "N должно быть положительным";
		return 0;
	}

	if (ceil(a) == floor(a))
	{
		std::cout << "N должно быть целым";
		return 0;
	}


	int b = factorial(a);

	std::cout << a << "! = " << b;
	return 0;
}

int factorial(int a)
{
	if (a > 1)
	{
		return a * factorial(a - 1);
	}
	return 1;
}