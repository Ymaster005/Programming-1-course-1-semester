#include <iostream>
#include <locale>
#include "Windows.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	int A, B, C, D, temp;
	std::cout << "Введите целое значение А ";
	std::cin >> A;
	std::cout << "Введите целое значение В ";
	std::cin >> B;
	std::cout << "Введите целое значение C ";
	std::cin >> C;
	std::cout << "Введите целое значение D ";
	std::cin >> D;
	std::cout << "A = " << A << "\t" << "B = " << B << "\t" << "C = " << C << "\t" << "D = " << D << "\n";

	while (!(A <= B && B <= C && C <= D))

	{
		if (A <= B)
		{
			if (B <= C)
			{
				if (C <= D)
				{

				}

				else
				{
					temp = C;
					C = D;
					D = temp;
				}
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

	std::cout << "A = " << A << "\t" << "B = " << B << "\t" << "C = " << C << "\t" << "D = " << D;

	return 0;
	system("PAUSE");

}
