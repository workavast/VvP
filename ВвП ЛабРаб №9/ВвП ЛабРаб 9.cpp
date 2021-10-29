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

        int sec;

        std::cout << "Введите целое количество секунд, прошедших с начала суток" << std::endl;
        std::cin >> sec;

        int min = sec / 60;//находим целое число минут
        int last_sec = sec - min * 60;//количество секунд, прошедших с начала последней минуты

        std::cout << "Количество секунд, прошедших с начала последней минуты = " << last_sec << std::endl;
    }
    case 2://---
    {
        std::cout << "\n---Задание №2---\n" << std::endl;

        int K;

        std::cout << "Введите номер дня года, в котором 1-го января было понедельником" << std::endl;
        std::cin >> K;

        int full_weeks = K / 7;//находим целое число недель
        int this_week = (K - (full_weeks * 7));//находим номер дня недели для K-го дня года

        std::cout << "Номер дня недели для заданого дня года, при условии, что 0-вс, 1-пн, ..., 6-сб = \n" << this_week << std::endl;

    }
    case 3://---
    {
        std::cout << "\n---Задание №3---\n" << std::endl;

        int K, N;

        std::cout << "Введите номер дня года" << std::endl;
        std::cin >> K;
        std::cout << "Введите номер дня недели(от 1 до 7) с которого начался год, где 1-пн, ..., 7-вс" << std::endl;
        std::cin >> N;

        int full_weeks = (K + N) / 7;
        int this_week = (K + N - (full_weeks * 7) - 1);//находим номер дня недели для K-го дня года

        if (this_week == 0)
        {
            std::cout << "Номер дня недели для заданого дня года, где 1-пн, ..., 7-вс = " << N << std::endl;
        }
        else
        {
            std::cout << "Номер дня недели для заданого дня года, где 1-пн, ..., 7-вс = " << this_week << std::endl;
        }
    }
    case 4://---
    {
        std::cout << "\n---Задание №4---\n" << std::endl;

        int A, B, C;

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
            std::cout << "Площадь незанятой части прямоугольника = " << A * B << std::endl;
        }
    }
    case 5://---
    {
        std::cout << "\n---Задание №5---\n" << std::endl;

        int year;

        std::cout << "Введите год" << std::endl;
        std::cin >> year;

        int century = ((year - 1) / 100) + 1;//находим номер столетия

        std::cout << "Введенный год имеет номер столетия = " << century << std::endl;
    }
    }

    return 0;
}