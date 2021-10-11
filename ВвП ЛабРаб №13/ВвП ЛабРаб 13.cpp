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

        int a, n = 1;
        double price, b = 0;

        setlocale(LC_ALL, "Russian");
        std::cout << "Введите цену 1-го кг конфет" << std::endl;
        std::cin >> a;

        while (n < 10)
        {
            n = n + 1;
            b = b + 0.1;
            price = a * b;
            std::cout << "Цена " << b << " кг конфет = " << price << std::endl;
        }
    }
    case 2://---
    {
        std::cout << "\n---Задание №2---\n" << std::endl;

        int N;
        double d = 1.1;
        double b = 1;

        setlocale(LC_ALL, "Russian");
        std::cout << "Введите количество сомножителей для нахождения произведения 1.1*1.2*1.3*... (N сомножителей)" << std::endl;
        std::cin >> N;

        while (N > 0)
        {
            N = N - 1;
            b = b * d;
            d = d + 0.1;
            std::cout << " " << b << std::endl;
        }

        std::cout << "Произведение заданого количества сомножителей = " << b << std::endl;
    }
    case 3://---
    {
        std::cout << "\n---Задание №3---\n" << std::endl;

        int N;
        int n = 1;
        int total = 0;

        setlocale(LC_ALL, "Russian");
        std::cout << "Введите число, для вычисления которого исбудет использована следующую формулу: N^2 = 1 + 3 + 5 + . . . + (2·N - 1). После добавления к сумме каждого слагаемого будет выведено текущее значение суммы " << std::endl;
        std::cin >> N;

        while (n <= (2 * N - 1))
        {
            std::cout << "Текущее значение суммы = " << n << std::endl;
            total = total + n;
            n = n + 2;
        }

        std::cout << "Введенное число в квадрате = " << total << std::endl;
    }
    case 4://---
    {
        std::cout << "\n---Задание №4---\n" << std::endl;

        int A, N;
        int n = 0;
        int total = 0;

        setlocale(LC_ALL, "Russian");
        std::cout << "Введите через пробел число А и его степень N, для поиска суммы 1 + A + A^2 + A^3 + ... + A^N" << std::endl;
        std::cin >> A >> N;

        while (N >= n)
        {
            total = total + pow(A, n);
            n = n + 1;
        }

        std::cout << "Ссума чисел = " << total << std::endl;
    }
    case 5://---
    {
        std::cout << "\n---Задание №5---\n" << std::endl;

        int A, N;
        int n = 0;
        int total = 0;

        setlocale(LC_ALL, "Russian");
        std::cout << "Введите через пробел число А и его степень N, для поиска значения выражения 1 - A + A^2 - A^3 + ... +- A^N" << std::endl;
        std::cin >> A >> N;

        while (N >= n)
        {
            total = total + pow(-A, n);
            n = n + 1;
        }

        std::cout << "Значение выражения = " << total << std::endl;
    }
    }

    return 0;
}