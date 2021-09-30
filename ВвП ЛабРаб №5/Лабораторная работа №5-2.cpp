#include <iostream>

int main()
{
    double a, b, c;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите координату первой точки А на оси х" << std::endl;
    std::cin >> a;
    std::cout << "Введите координату второй точки В на оси х" << std::endl;
    std::cin >> b;
    std::cout << "Введите координату третьей точки С на оси х" << std::endl;
    std::cin >> c;

    double ac = abs(c - a);//находим прямую ac
    double bc = abs(c - b);//находим прямую bc
    double total = ac + bc;//находим сумму прямых

    std::cout << "Длинна отрезка AC = " << ac << std::endl;
    std::cout << "Длинна отрезка BC = " << bc << std::endl;
    std::cout << "Сумма длинн отрезков AC и BC = " << total << std::endl;

    return 0;
}