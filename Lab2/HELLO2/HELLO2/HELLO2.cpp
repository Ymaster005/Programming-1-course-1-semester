#include <iostream>
#include <locale>
#include "Windows.h"
#include <string>

void main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    std::string name;
    std::cout << "як вас звуть ? = ";
    std::cin >> name;
    std::cout << "Доброго дня, " << name << "!" << "\n";
    system("PAUSE");
}