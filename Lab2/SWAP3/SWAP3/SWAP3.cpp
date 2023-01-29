#include <iostream>
#include <locale>
#include "Windows.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	int a, b, c, temp;
	std::cout << "Введіть А : ";
	std::cin >> a;
	std::cout << "Введіть B : ";
	std::cin >> b;
	std::cout << "Введіть C : ";
	std::cin >> c;
	std::cout << "A= " << a << "\t" << "B= " << b << "\t" << "C = " << c << "\n\n";
	temp = a;
	a = c;
	c = b;
	b = temp;
	std::cout << "A= " << a << "\t" << "B= " << b << "\t" << "C = " << c << "\n\n";
	system("PAUSE");
}
