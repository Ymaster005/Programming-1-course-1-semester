#include <iostream>
#include <locale>
#include "Windows.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    char name[100];
    std::cout << "Введіть текст:" << "\n";

    while (std::cin.get() != '\n')
    {
        std::cin.getline(name, 100);
        std::cout << "\n" << name << "\n";
    }

    return 0;
}