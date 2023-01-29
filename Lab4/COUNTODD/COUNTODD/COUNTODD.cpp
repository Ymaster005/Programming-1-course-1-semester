#include <iostream>
#include <locale>
#include "Windows.h"
#include <stdlib.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	int a, b;
	b = 0;
	std::cout << "Введіть ціле число = ";
	std::cin >> a;

	if (a % 2 == 0)
	{

	}

	else
	{
		b = b + 1;
	}

		while (a != 0)
		{
			std::cout << "Введіть ціле число = ";
			std::cin >> a;

			if (a % 2 == 0)
			{
				
			}

			else
			{
				b = b + 1;
			}
		}

	std::cout << "Кількість непарних чисел = " << b;

	return 0;

}
