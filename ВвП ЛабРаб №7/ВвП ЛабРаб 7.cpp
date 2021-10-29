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

        double a;

        std::cout << "Введите значение угла в градусах(0 < α < 360)" << std::endl;
        std::cin >> a;

        double rad = a * 3.14 / 180;

        std::cout << "Значение угла в радианах = " << rad << std::endl;
    }
    case 2://---
    {
        std::cout << "\n---Задание №2---\n" << std::endl;

        double a;

        std::cout << "Введите значение угла в радиантах(0 < α < 2·π)" << std::endl;
        std::cin >> a;

        double ugol = a * 57.3248;

        std::cout << "Значение угла в градусах = " << ugol << std::endl;
    }
    case 3://---
    {
        std::cout << "\n---Задание №3---\n" << std::endl;

        double X, A, Y;

        std::cout << "Введите вес первой пачки конфет в кг" << std::endl;
        std::cin >> X;
        std::cout << "Введите цену конфет" << std::endl;
        std::cin >> A;
        std::cout << "Введите вес второй пачки уонфет в кг" << std::endl;
        std::cin >> Y;

        double price_1kg = A / X;//цена 1-го кг конфет
        double total = Y * price_1kg;//цена Y кг конфет

        std::cout << "Цена 1 кг этих конфет = " << price_1kg << std::endl;
        std::cout << "Цена второй пачки конфет = " << total << std::endl;
    }
    case 4://---
    {
        std::cout << "\n---Задание №4---\n" << std::endl;

        double V1, V2, S, T;

        std::cout << "Введите скорость первого автомобиля" << std::endl;
        std::cin >> V1;
        std::cout << "Введите скорость второго автомобиля" << std::endl;
        std::cin >> V2;
        std::cout << "Введите начальное растояние между автомобилями" << std::endl;
        std::cin >> S;
        std::cout << "Введите время в течении которого автомобили ехали" << std::endl;
        std::cin >> T;

        double V0 = V1 + V2;//общая скорость автомобилей
        double S0 = V0 * T + S;//расстояние между автомобилями через Т времени

        std::cout << "Расстояние между автомобилями спустя заданное время = " << S0 << std::endl;
    }
    case 5://---
    {
        std::cout << "\n---Задание №5---\n" << std::endl;

        double A, B;

        std::cout << "Введите значения А(коэффициент A не равен 0) и В через пробел для уравнения А*х+В=0" << std::endl;
        std::cin >> A >> B;

        double x = -B / A;//решение уравнения A·x + B = 0

        std::cout << "x = " << x << std::endl;
    }
    case 6://---
    {
        std::cout << "\n---Задание №6---\n" << std::endl;

        double A1, B1, C1, A2, B2, C2, x, y;

        std::cout << "Введите значения А1, В1, С1 через пробел для уравнения A1·x + B1·y = C1 из системы уравнений " << std::endl;
        std::cin >> A1 >> B1 >> C1;
        std::cout << "Введите значения А2, В2, С2 через пробел для уравнения A2·x + В2·y = C2 из системы уравнений " << std::endl;
        std::cin >> A2 >> B2 >> C2;


        y = ((A2*C1-A1*C2) / (A2*B1-A1*B2));

        x = ((B2*C1-B1*C2) / (A1*B2-A2*B1));

        std::cout << "Решение системы уравнений" << std::endl;
        std::cout << "A1·x + B1·y = C1" << std::endl;
        std::cout << "A2·x + В2·y = C2" << std::endl;
        std::cout << "x = " << x << std::endl;

        if (y==-0)
            std::cout << "y = " << abs(y) << std::endl;
        else
            std::cout << "y = " << y << std::endl;
    }
    }
    return 0;
}