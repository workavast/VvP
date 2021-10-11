#include <iostream>

int main()
{
    int LABA;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите номер задания" << std::endl;
    std::cin >> LABA;

    switch (LABA)
    {
    case 1://---
    {
        std::cout << "\n---Задание №1---\n" << std::endl;

        int A, B;

        std::cout << "Введите через пробел значения A, B" << std::endl;
        std::cin >> A >> B;

        bool c = (A > 2) & (B <= 3);

        std::cout << std::boolalpha;
        std::cout << "Справедливы ли неравенства одновременно A > 2 и B <= 3?\n" << "Ответ: " << c << std::endl;
    }
    case 2://---
    {
        std::cout << "\n---Задание №2---\n" << std::endl;

        int A, B, C;

        std::cout << "Введите через пробел значения A, B, C" << std::endl;
        std::cin >> A >> B >> C;

        bool c = (A < B) & (A < C) & (B < C);

        std::cout << std::boolalpha;
        std::cout << "Справедливо ли двойное неравенство A < B < C ?\n" << "Ответ: " << c << std::endl;

    }
    case 3://---
    {
        std::cout << "\n---Задание №3---\n" << std::endl;

        int a;

        std::cout << "Введите число" << std::endl;
        std::cin >> a;

        bool c1 = a - (a / 2) * 2 == 0;//определяем является ли число четным
        bool c2 = (a / 10) - 10 < 0;//определяем является ли число двузначным
        bool c = (c1 + c2) / 2;

        std::cout << std::boolalpha;
        std::cout << "Является ли данное число четным двузначным? \n" << "Ответ: " << c << std::endl;
    }
    case 4://---
    {
        std::cout << "\n---Задание №4---\n" << std::endl;

        int a;

        std::cout << "Введите трех значное число" << std::endl;
        std::cin >> a;

        int a1 = a / 100;
        int a2 = a / 10 - a1 * 10;
        int a3 = a - a1 * 100 - a2 * 10;

        bool c123 = (a1 > a2) & (a2 > a3);//проверяем являются ли цифры числа возрастающей последовательностью
        bool c321 = (a3 > a2) & (a2 > a1);//проверяем являются ли цифры числа убывающе последовательностью

        bool total = c123 + c321;

        std::cout << std::boolalpha;
        std::cout << "Цифры данного числа образуют возрастающую или убывающую последовательность? \n" << "Ответ: " << total << std::endl;
    }
    case 5://---
    {
        std::cout << "\n---Задание №5---\n" << std::endl;

        int a;

        std::cout << "Введите четырехзначное чило" << std::endl;
        std::cin >> a;

        int b = a / 100;//выделяем первую и вторую цифру
        int b1 = b / 10;//выделяем первую цифру
        int b2 = b - b1 * 10;//выделяем вторую цифру

        int b21 = b2 * 10 + b1;//составляем число состоящее из второй и первой цифры
        int d = a - b * 100;//выделяем число состоящее из третьей и четвертой цифры

        bool c = d == b21;//сравниваем полученные числа

        std::cout << std::boolalpha;
        std::cout << "Читается ли данное число одинаково слева направо и справа налево? \n" << "Ответ: " << c << std::endl;
    }
    case 6://---
    {
        std::cout << "\n---Задание №6---\n" << std::endl;

        int a, b, c;

        std::cout << "Введите через пробел длинны трех сторон треугольника" << std::endl;
        std::cin >> a >> b >> c;

        int a1 = (b * b + c * c) / a;//находим сторону a по теореме пифагора
        int b1 = (a * a + c * c) / b;//находим сторону b по теореме пифагора
        int c1 = (a * a + b * b) / c;//находим сторону c по теореме пифагора

        bool a2 = a1 == a;
        bool b2 = b1 == b;
        bool c2 = c1 == c;

        bool d = a2 + b2 + c2;

        std::cout << std::boolalpha;
        std::cout << "Является ли треугольник со сторонами a, b, c прямоугольным? \n" << "Ответ: " << d << std::endl;
    }
    case 7://---
    {
        std::cout << "\n---Задание №7---\n" << std::endl;

        int a, b, c;

        std::cout << "Введите через пробел три стороны треугольника" << std::endl;
        std::cin >> a >> b >> c;

        bool d1 = (a + b) > c;
        bool d2 = (b + c) > a;
        bool d3 = (c + a) > b;

        bool d0 = (d1 + d2 + d3) / 3;

        std::cout << std::boolalpha;
        std::cout << "Существует ли треугольник со сторонами a, b, c ?\n" << "Ответ: " << d0 << std::endl;
    }
    }

    return 0;
}