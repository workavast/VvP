#include <iostream>

int main()
{
    int day, month;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите номер дня" << std::endl;
    std::cin >> day;
    std::cout << "Введите номер месяца" << std::endl;
    std::cin >> month;

    if (day > 20)
    {
        if (day > 30)//находится ли день после 30
        {
            std::cout << "тридцать ";
        }
        else
        {
            if (day < 30)//находится ли день между 20 и 30
            {
                std::cout << "двадцать ";
            }
        }
    }

    if (day == 20)
    {std::cout << "двацатое ";}
    if (day == 30)
    {std::cout << "тридцатое ";}

    int a = day / 10;
    int b = day - a * 10;

    if ((day > 9)&(day < 20))
    {
        if (day == 10)
        {std::cout << "десятое ";}
        if (day == 11)
        {std::cout << "одиннадцатое ";}
        if (day == 12)
        {std::cout << "двеннадцатое ";}
        if (day == 13)
        {std::cout << "тринадцатое ";}
        if (day == 14)
        {std::cout << "четырнадцатое ";}
        if (day == 15)
        {std::cout << "пятнадцатое ";}
        if (day == 16)
        {std::cout << "шестнадцатое ";}
        if (day == 17)
        {std::cout << "семнадцатое ";}
        if (day == 18)
        {std::cout << "восемнадцатое ";}
        if (day == 19)
        {std::cout << "девятнадцатое ";}
    }
    else
    {
        if (b == 1)
        {std::cout << "первое ";}
        if (b == 2)
        {std::cout << "второе ";}
        if (b == 3)
        {std::cout << "третье ";}
        if (b == 4)
        {std::cout << "четвертое ";}
        if (b == 5)
        {std::cout << "пятое ";}
        if (b == 6)
        {std::cout << "шестое ";}
        if (b == 7)
        {std::cout << "седьмое ";}
        if (b == 8)
        {std::cout << "восьмое ";}
        if (b == 9)
        {std::cout << "девятое ";}
    }

    if (month == 1)
    {std::cout << "января " << std::endl;}
    if (month == 2)
    {std::cout << "февраля " << std::endl;}
    if (month == 3)
    {std::cout << "марта " << std::endl;}
    if (month == 4)
    {std::cout << "апреля " << std::endl;}
    if (month == 5)
    {std::cout << "мая " << std::endl;}
    if (month == 6)
    {std::cout << "июня " << std::endl;}
    if (month == 7)
    {std::cout << "июля " << std::endl;}
    if (month == 8)
    {std::cout << "августа " << std::endl;}
    if (month == 9)
    {std::cout << "сентября " << std::endl;}
    if (month == 10)
    {std::cout << "октября " << std::endl;}
    if (month == 11)
    {std::cout << "ноября" << std::endl;}
    if (month == 12)
    {std::cout << "декабря " << std::endl;}
    
    return 0;
}