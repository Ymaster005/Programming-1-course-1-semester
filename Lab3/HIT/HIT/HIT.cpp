#include <iostream>
#include <locale>
#include "Windows.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	double x, y, R, x0, y0;
	x0 = 3;
	y0 = 4;
	R = 5;
	std::cout << "На плоскости лежит окружность с центром в точке O(" << x0 << ", " << y0 << ").Радиус окружности равен " << R;
	std::cout << "\n" << "Введите координаты точки А" << "\n" << "x = ";
	std::cin >> x;
	std::cout << "y = ";
	std::cin >> y;

	if ((x - x0) * (x - x0) + (y- y0) * (y - y0) <= R * R)
	{
		std::cout << "Точка A(" << x << ", " << y << ") попадает в круг с центром в точке O(" << x0 << ", " << y0 << ") радиуса " << R;
	}
	
	else
	{
		std::cout << "Точка A(" << x << ", " << y << ") не попадает в круг с центром в точке O(" << x0 << ", " << y0 << ") радиуса " << R;
	}

	return 0;
	system("PAUSE");

}
