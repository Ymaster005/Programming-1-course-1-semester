#include <iostream>
#include <locale>
#include "Windows.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	int a, b, c, d, temp;
	std::cout << "Введіть А : ";
	std::cin >> a;
	std::cout << "Введіть B : ";
	std::cin >> b;
	std::cout << "Введіть C : ";
	std::cin >> c;
	std::cout << "Введіть D : ";
	std::cin >> d;
	std::cout << "A= " << a << "\t" << "B= " << b << "\t" << "C = " << c << "\t" << "D = " << d << "\n\n";
	temp = a;
	a = d;
	d = c;
	c = b;
	b = temp;
	std::cout << "A= " << a << "\t" << "B= " << b << "\t" << "C = " << c << "\t" << "D = " << d << "\n\n";
	system("PAUSE");
}
