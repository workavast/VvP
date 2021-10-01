﻿#include <iostream>

int main()
{
    int A, B, C;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите через пробел длинны двух не равных сторон прямоугольника " << std::endl;
    std::cin >> A >> B;
    std::cout << "Введите длинну стороны квадрата " << std::endl;
    std::cin >> C;

    if ((C <= A) & (C <= B))
    {
        int S_ab = A * B;//находим площадь прямоугольника
        int S_c = C * C;//находим площадь квадрата
        int N_full = S_ab / S_c;//находим число полных квадратов в прямоугольнике
        int S_empty = S_ab - N_full * S_c;////находим площадь не занятой части прямоугольника

        std::cout << "Количество квадратов, размещенных на прямоугольнике = " << N_full << std::endl;
        std::cout << "Площадь незанятой части прямоугольника = " << S_empty << std::endl;
    }
    else
    {
        std::cout << "Количество квадратов, размещенных на прямоугольнике = 0" << std::endl;
        std::cout << "Площадь незанятой части прямоугольника = " << A*B << std::endl;
    }
    return 0;
}