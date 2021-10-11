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

        int a, b;

        std::cout << "Введите через пробел два числа А и В" << std::endl;
        std::cin >> a >> b;
        std::cout << "Если их значения не равны, то каждой переменной будет присвоено большее из этих значений, а если равны, то нулевые значения" << std::endl;

        bool d1 = a > b;
        bool d2 = a < b;

        int a1 = b * d2 + a * d1;
        int b1 = a * d1 + b * d2;

        std::cout << "A = " << a1 << std::endl;
        std::cout << "B = " << b1 << std::endl;
    }
    case 2://---
    {
        std::cout << "\n---Задание №2---\n" << std::endl;

        int a, b, c;

        std::cout << "Введите через пробел три числа" << std::endl;
        std::cin >> a >> b >> c;

        bool d1 = (a > b) | (a > c);//узнаем является ли a наибольшим числом
        bool d2 = (b > c) | (b > a);//узнаем является ли b наибольшим числом
        bool d3 = (c > a) | (c > b);//узнаем является ли c наибольшим числом

        int sum = a * d1 + b * d2 + c * d3;//наименьшее значение умножается на ноль, а остальные на 1 и складываются


        std::cout << "Сумма двух наибольших из чисел = " << sum << std::endl;

    }
    case 3://---
    {
        std::cout << "\n---Задание №3---\n" << std::endl;

        int a, b, c;

        std::cout << "Введите через пробел координаты по оси х для трех точек А, В, С" << std::endl;
        std::cin >> a >> b >> c;

        int ab = abs(b - a);//определяем длинну отрезка ab
        int ac = abs(c - a);//определяем длинну отрезка ac

        if (ab <= ac)
        {
            std::cout << "К точке А ближе точка B, растояние между ними = " << ab << std::endl;
        }
        else
        {
            std::cout << "К точке А ближе точка С, растояние между ними =" << ac << std::endl;
        }
    }
    case 4://---
    {
        std::cout << "\n---Задание №4---\n" << std::endl;

        int x, y;

        std::cout << "Введите через пробел координаты точки" << std::endl;
        std::cin >> x >> y;

        if (x > 0)
        {
            if (y > 0)
            {
                std::cout << "точка рассположена в первой четверти" << std::endl;
            }//первая четверть имеет вид +x;+y
            else
            {
                std::cout << "точка рассположена в третьей четверти" << std::endl;
            }//третья четверть имеет вид +x;-y
        }
        else
        {
            if (y > 0)
            {
                std::cout << "точка рассположена во второй четверти" << std::endl;
            }//вторая четверть имеет вид -x;+y
            else
            {
                std::cout << "точка рассположена в четвертой четверти" << std::endl;
            }//четвертая четверть имеет вид -x;-y
        }
    }
    case 5://---
    {
        std::cout << "\n---Задание №5---\n" << std::endl;

        int a;

        std::cout << "Введите число" << std::endl;
        std::cin >> a;

        int b = a / 2;
        int c = a - b * 2;//определяем четность/нечетность числа

        if (a >= 0)
        {
            if (a == 0)
            {
                std::cout << "Введено нулевое число" << std::endl;
            }
            else
            {
                if (c == 0)
                {
                    std::cout << "Введено положительное четное число" << std::endl;
                }
                else
                {
                    std::cout << "Введено положительное нечетное число" << std::endl;
                }
            }
        }
        else
        {
            if (c == 0)
            {
                std::cout << "Введено отрицательное четное число" << std::endl;
            }
            else
            {
                std::cout << "Введено отрицательное нечетное число" << std::endl;
            }
        }
    }
    case 6://---
    {
        std::cout << "\n---Задание №6---\n" << std::endl;

        int a;

        std::cout << "Введите число от 1 до 999" << std::endl;
        std::cin >> a;

        int b = a / 2;
        int c = a - b * 2;//определяем четность/нечетность числа

        if (a > 9)
        {
            if (a > 99)
            {
                if (c == 0)
                {
                    std::cout << "Введено четное трехзначное число" << std::endl;
                }
                else
                {
                    std::cout << "Введено нечетное трехзначное число" << std::endl;
                }
            }
            else
            {
                if (c == 0)
                {
                    std::cout << "Введено четное двузначное число" << std::endl;
                }
                else
                {
                    std::cout << "Введено нечетное двузначное число" << std::endl;
                }
            }
        }
        else
        {
            if (c == 0)
            {
                std::cout << "Введено четное однозначное число" << std::endl;
            }
            else
            {
                std::cout << "Введено нечетное однозначное число" << std::endl;
            }
        }
    }
    }

    return 0;
}