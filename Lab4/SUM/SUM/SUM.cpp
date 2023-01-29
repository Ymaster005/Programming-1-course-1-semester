#include <iostream>
#include <locale>
#include "Windows.h"
#include <stdlib.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	int sum = 0;
	std::cout << "Введіть ціле число, щоб вивести результат введіть 0\n";

	for (int a = 1; a != 0;)
	{
		std::cin >> a;
		sum = sum + a;
	}
	
	std::cout << "SUM = " << sum << "\n";

	return 0;

}
