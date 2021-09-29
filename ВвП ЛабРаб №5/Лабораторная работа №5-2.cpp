#include <iostream>

int main()
{
    double a, b, c;

    std::cin >> a >> b >> c;

    double ac =abs(c - a);
    double bc = abs(c - b);
    double total = ac + bc;

    setlocale(LC_ALL, "Russian");
    std::cout << "Длинна отрезка AC = " << ac << std::endl;
    std::cout << "Длинна отрезка BC = " << bc << std::endl;
    std::cout << "Сумма длинн отрезков AC и BC = " << total << std::endl;

    return 0;
}