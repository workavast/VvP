#include <iostream>

int main()
{
    int a;

    setlocale(LC_ALL, "Russian");
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
            {std::cout << "Введено положительное четное число" << std::endl;}
            else
            {std::cout << "Введено положительное нечетное число" << std::endl;}
        }
    }
    else
    {
        if (c == 0)
        {std::cout << "Введено отрицательное четное число" << std::endl;}
        else
        {std::cout << "Введено отрицательное нечетное число" << std::endl;}
    }

    return 0;
}