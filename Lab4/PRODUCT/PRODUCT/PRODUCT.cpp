#include <iostream>
#include <locale>
#include "Windows.h"
#include <stdlib.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	int product = 1;
	std::cout << "Введіть ціле число, щоб вивести результат введіть 0\n";

	for (int a = 1; a != 0;)
	{
		std::cin >> a;
		
		if (a == 0)
		{

		}

		else
		{
			if (a % 2 == 0)
			{
				product = product * a;
			}
		}		
	}
	

	std::cout << "ДОБУТОК = " << product << "\n";

	return 0;

}
