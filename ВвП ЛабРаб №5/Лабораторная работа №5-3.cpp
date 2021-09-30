#include <iostream>

int main()
{
    double a, b, c;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите координату первой точки А на оси х" << std::endl;
    std::cin >> a;
    std::cout << "Введите координату второй точки C на оси х" << std::endl;
    std::cin >> c;
    std::cout << "Введите координату третьей точки B на оси х" << std::endl;
    std::cin >> b;

    double total = abs((c - a) * (b - c));
   
    std::cout << "Произведение длин отрезков AC и BC = " << total << std::endl;

    return 0;
}