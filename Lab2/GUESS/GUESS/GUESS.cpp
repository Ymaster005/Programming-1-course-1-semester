#include <iostream>
#include <locale>
#include "Windows.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	int result, intended_number;
	std::cout << "Задуймайте число" << "\n\n";
	std::cout << "Помножте ваше число на 4" << "\n" << "Отримане число помножте на 3" << "\n";
	std::cout << "Отримане число поділіть на 6" << "\n" << "До отриманого числа додайте 4" << "\n";
	std::cout << "Отримане число поділіть на 2" << "\n" << "Від отриманого числа відніміть 1" << "\n";
	std::cout << "\n" << "Яке число ви отримали?" << "\n";
	std::cin >> result;
	intended_number = ((result + 1) * 2 - 4) * 6 / 3 / 4;
	std::cout << "\n" << "Задумане число : " << intended_number;
}