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
    int age;
    std::string place;
    std::cout << "Як вас звуть? = ";
    std::cin >> name;
    std::cout << "Скільки вам років? = ";
    std::cin >> age;
    std::cout << "Де ви навчаєтесь? = ";
    std::cin >> place;
    std::cout << "\n" << "Доброго дня, " << name << "!" << "\n";
    std::cout << "Вітаємо вас, вам усього " << age << ",а ви вже ведете діалог з комп'пютером!" << "\n";
    std::cout << place << " буде пишатися вами" << "\n";
    system("PAUSE");
}