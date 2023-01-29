#include <iostream>
#include <locale>
#include "Windows.h"
void main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "ukr");
    std::wcout << L"Прізвище : Марков\nІм'я : Артем\nПо батькові : Олександрович\nСтать : чоловіча\nДата народження : 2005-09-28\nАдреса : Dnipro, Ukraine\nНомер телефону : +380 66 707 8587\nМісце навчання : ФПМ, ДНУ ім. Олеся Гончара\nГрупа : ПА-22-1\nХоббі : комп'ютернi iгри\n";
}