#include <iostream>

int main()
{
    int N;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите количество(от 10 до 40) учебных заданий по некоторой теме" << std::endl ;
    std::cin >> N;

    if (N > 20)
    {
        if ((N > 30)&(N < 40))//находится ли число между 30 и 40
        {
            std::cout << "тридцать ";
        }
        else
        {
            if (N < 30)//находится ли число между 20 и 30
            {std::cout << "двадцать ";}
        }
    }

    if (N == 20)
    {std::cout << "двадцать ";}
    if (N == 30)
    {std::cout << "тридцать ";}
    if (N == 40)
    {std::cout << "сорок ";}

    int a = N / 10;
    int b = N - a * 10;

    if ((N > 9) & (N < 20))
    {
        if (N == 10)
        {std::cout << "десять ";}
        if (N == 11)
        {std::cout << "одиннадцать ";}
        if (N == 12)
        {std::cout << "двенадцать ";}
        if (N == 13)
        {std::cout << "тринадцать ";}
        if (N == 14)
        {std::cout << "четырнадцать ";}
        if (N == 15)
        {std::cout << "пятнадцать ";}
        if (N == 16)
        {std::cout << "шестнадцать ";}
        if (N == 17)
        {std::cout << "семнадцать ";}
        if (N == 18)
        {std::cout << "восемнадцать ";}
        if (N == 19)
        {std::cout << "девятнадцать ";}
    }
    else
    {
        if (b == 1)
        {std::cout << "одно ";}
        if (b == 2)
        {std::cout << "два ";}
        if (b == 3)
        {std::cout << "три ";}
        if (b == 4)
        {std::cout << "четыре ";}
        if (b == 5)
        {std::cout << "пять ";}
        if (b == 6)
        {std::cout << "шесть ";}
        if (b == 7)
        {std::cout << "семь ";}
        if (b == 8)
        {std::cout << "восемь ";}
        if (b == 9)
        {std::cout << "девять ";}
    }

    if ((N != 21)&(N != 31))
    {std::cout << "учебных заданий" << std::endl;}
    else
    {std::cout << "учебное задание" << std::endl;}

    return 0;
}