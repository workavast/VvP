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
        int A2 = 0;
        int bufer = 0;

        std::cout << "Введите через пробел значения A<B" << std::endl;
        std::cin >> A >> B;

        std::cout << "Все целые числа от A до B включительно, в количестве равном их значению:" << std::endl;
        while (A <= B)
        {
            bufer = A;
            while (bufer > 0)
            {
                std::cout << A << " ";
                bufer = bufer - 1;
            }
            std::cout << std::endl;
            A = A + 1;
        }
    }
    case 2://---
    {
        std::cout << "\n---Задание №2---\n" << std::endl;

        int A, A2, B;
        int N = 0;
        int bufer = 0;

        std::cout << "Введите через пробел значения отрезков A>B, где отрезок В занимает часть отрезка А" << std::endl;
        std::cin >> A >> B;

        A2 = A;

        while (A2 >= B)
        {
            bufer = bufer + B;
            A2 = A2 - B;
        }

        N = A - bufer;
        std::cout << "Длина незанятой части отрезка A = " << N << std::endl;
    }
    case 3://---
    {
        std::cout << "\n---Задание №3---\n" << std::endl;

        int N;
        int sum = 0;
        int K = 0;

        std::cout << "Введите число N" << std::endl;
        std::cin >> N;

        while (sum < N)
        {
            K = K + 1;
            sum = sum + K;
        }

        std::cout << "Наименьшее из целых чисел K, для которых сумма 1 + 2 + . . . + K будет больше или равна N = " << K << std::endl;
        std::cout << "Сама эта сумма = " << sum << std::endl;
    }
    case 4://---
    {
        std::cout << "\n---Задание №4---\n" << std::endl;

        int P;
        int total = 1000;
        int K = 0;

        std::cout << "Начальный вклад в банке равен 1000 руб. Через каждый месяц размер вклада увеличивается на P процентов от имеющейся суммы (P — вещественное число, 0 < P < 25). Введите значение Р" << std::endl;
        std::cin >> P;

        while (total <= 1100)
        {
            K = K + 1;
            total = total + total * P / 100;
        }

        std::cout << "Размер вклада превысит 1100 руб через " << K << " месяцев" << std::endl;
        std::cout << "итоговый размер вклада " << total << std::endl;
    }
    case 5://---
    {
        std::cout << "\n---Задание №5---\n" << std::endl;

        int A, B;

        std::cout << "Ввеите через пробел целые положительные числа A и B" << std::endl;
        std::cin >> A >> B;

        while ((A != 0) & (B != 0))
        {
            if (A > B)
            {
                A = A % B;
            }
            else
            {
                B = B % A;
            }
        }

        if (A < B)
        {
            std::cout << "НОД заданных чисел = " << B << std::endl;
        }
        else
        {
            std::cout << "НОД заданных чисел = " << A << std::endl;
        }
    }
    case 6:
    {
        int N, bufer, C;
        int K = 2;//Номер уже имеющегося числа Фибоначи
        int A = 0;//Значение 1-го числа Фибоначи
        int B = 1;//Значение 2-го числа Фибоначи

        std::cout << "Ввеите число Фибоначи, которое больше 1" << std::endl;
        std::cin >> N;

        while (B != N)
        {
            K = K + 1;

            C = A + B;
            A = B;
            B = C;
        }

        std::cout << "Номер введенного числа Фибоначи = " << K << std::endl;
    }
    }

    return 0;
}