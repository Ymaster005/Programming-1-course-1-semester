#include <iostream>
#include <locale>
#include "Windows.h"
#include <stdlib.h>
#include <time.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	int x, N, max = 0, min = 0;
	std::cout << "Введите количество чисел в последовательности, но не больше 60 ";
	std::cin >> N;
	int ynumbers[60]{};

	srand(time(NULL));
	x = rand() % 61 - 30;
	std::cout << "x = " << x;
	
	//до циклов

	for (int i = 0; i < N; i++)
	{
		ynumbers[i] = rand() % 61 - 30;
	}
	
	std::cout << "\nчисла последовательности:\n";

	for (int i = 0; i < N; i++)
	{
		std::cout << ynumbers[i] << " ";
	}

	//генерация массивов

	N = N - 1;

	if (ynumbers[0] == x)
	{
		std::cout << "\n\n" << ynumbers[0] << " = " << x;
	}
	else
	{
		if (ynumbers[0] < x)
		{
			std::cout << "\n\n" << ynumbers[0] << " < " << x;
		}

		else
		{
			std::cout << "\n\n" << ynumbers[0] << " > " << x;
		}
	}
	
	if (x == ynumbers[N])
	{
		std::cout << " = " << ynumbers[N];
	}
	else
	{
		if (x > ynumbers[N])
		{

			std::cout << " > " << ynumbers[N];
		}

		else
		{
			std::cout << " < " << ynumbers[N];
		}
	}

	//сравнение x с первым и последним членом последовательности

	for (int i = 0; i < N; i++)
	{
		if (ynumbers[i] > max)
		{
			max = ynumbers[i];
		}

		else
		{

		}
	}

	std::cout << "\n\n" << "Max = " << max;

	for (int i = 0; i < N; i++)
	{
		if (ynumbers[i] < min)
		{
			min = ynumbers[i];
		}

		else
		{

		}
	}

	std::cout << "\n" << "Min = " << min;

	//вывод максимальных и минимальных значений среди последовательности

	if (min == x)
	{
		std::cout << "\n" << min << " = " << x;
	}
	else
	{
		if (min < x)
		{
			std::cout << "\n" << min << " < " << x;
		}

		else
		{
			std::cout << "\n" << min << " > " << x;
		}
	}

	if (x == max)
	{
		std::cout << " = " << max;
	}
	else
	{
		if (x > max)
		{

			std::cout << " > " << max;
		}

		else
		{
			std::cout << " < " << max;
		}
	}

	
	return 0;
}
