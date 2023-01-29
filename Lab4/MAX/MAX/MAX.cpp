#include <iostream>
#include <locale>
#include "Windows.h"
#include <stdlib.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	int b, max = 0;
	std::cout << "Введіть ціле число, щоб вивести результат введіть 0\n";
	
	std::cin >> b;

	if (b == 0)
	{

	}

	else
	{
		max = b;
	}

	for (int a = 1; a != 0;)
	{
		std::cin >> a;

		if (a == 0)
		{

		}

		else
		{
			if (a > max)
			{
				max = a;
			}
		}
	}
	
	std::cout << "MAX = " << max << "\n";

	return 0;

}
