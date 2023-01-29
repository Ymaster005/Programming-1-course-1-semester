#include <iostream>
#include <locale>
#include "Windows.h"

int fibonacci(int);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	std::cout << "N = ";
	std::cin >> c;
	for (a = 0; a <= c; a++)
	{
		b = fibonacci(a);
	}

	std::cout << "F(" << c << ") = " << b;

}

int fibonacci(int b)
{
	if (b == 0)
	{
		return 0;
	}

	if (b == 1)
	{
		return 1;
	}
	return fibonacci(b - 1) + fibonacci(b - 2);
}