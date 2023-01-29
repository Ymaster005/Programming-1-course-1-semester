#include <iostream>
#include <locale>
#include "Windows.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	int a, b, temp;
	std::cout << "Введіть А : ";
	std::cin >> a;
	std::cout << "Введіть B : ";
	std::cin >> b;
	std::cout << "A= " << a << "\t" << "B=" << b << "\n\n";
	temp = a;
	a = b;
	b = temp;
	std::cout << "A= " << a << "\t" << "B=" << b << "\n";
	system("PAUSE");
}
