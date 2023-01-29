#include <iostream>
#include <locale>
#include "Windows.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	int A, B, C, temp;
	std::cout << "Введите целое значение А ";
	std::cin >> A;
	std::cout << "Введите целое значение В ";
	std::cin >> B;
	std::cout << "Введите целое значение C ";
	std::cin >> C;
	std::cout << "A = " << A << "\t" << "B = " << B << "\t" << "C = " << C << "\n";

	while (!(A <= B && B <= C))
	
	{
		if (A <= B)
		{
			if (B <= C)
			{
				
			}

			else
			{
				temp = B;
				B = C;
				C = temp;
			}

		}

		else
		{
			temp = A;
			A = B;
			B = temp;
		}
	}

	std::cout << "A = " << A << "\t" << "B = " << B << "\t" << "C = " << C;

	return 0;
	system("PAUSE");

}
