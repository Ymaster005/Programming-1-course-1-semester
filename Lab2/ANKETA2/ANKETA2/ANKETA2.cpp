#include <iostream>
#include <locale>
#include "Windows.h"
#include <string>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    std::string name1, name2, name3, gender, birthday, adress, phone_number, place, group, hobby;
    std::cout << "Прізвище?= : ";
    getline(std::cin, name1);
    std::cout << "Ім'я?= : ";
    getline(std::cin, name2);
    std::cout << "По батькові?= : ";
    getline(std::cin, name3);
    std::cout << "Стать?= : ";
    getline(std::cin, gender);
    std::cout << "Дата народження?= : ";
    getline(std::cin, birthday);
    std::cout << "Адреса?= : ";
    getline(std::cin, adress);
    std::cout << "Номер телефону?= : ";
    getline(std::cin, phone_number);
    std::cout << "Місце навчання?= : ";
    getline(std::cin, place);
    std::cout << "Група?= : ";
    std::cin >> group;
    std::cout << "Хоббі?= : ";
    std::cin >> hobby;
    std::cout << "\n" << "\t\t\t\t\t\tА Н К Е Т А" << "\n\n";
    std::cout << "Прізвище : " << name1 << "\t\t" << "Ім'я : " << name2 << "\t\t" << "По батькові : " << name3 << "\n";
    std::cout << "Номер телефону : " << phone_number << "\t\t\t\t" << "Хоббі : " << hobby << "\n";
    std::cout << "Місце навчання : " << place << "\t\t\t\t" << "Група : " << group << "\n";
    std::cout << "Дата народження : " << birthday << "\t\t\t\t" << "Стать : " << gender << "\n";
    std::cout << "Адреса : " << adress << "\n";
    system("PAUSE");
    return 0;
}