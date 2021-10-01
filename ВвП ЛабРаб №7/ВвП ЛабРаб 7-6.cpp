#include <iostream>

int main()
{
    double A1, B1, C1, A2, B2, C2, x, y;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите значения А1, В1, С1 через пробел для уравнения A1·x + B1·y = C1 из системы уравнений " << std::endl;
    std::cin >> A1 >> B1 >> C1;
    std::cout << "Введите значения А2, В2, С2 через пробел для уравнения A2·x + В2·y = C2 из системы уравнений " << std::endl;
    std::cin >> A2 >> B2 >> C2;


    y = ((A2 * C1) / A1 - C2) / ((A2 * B1) / A1 - B2);

    x = (C1 - (B1 * y)) / A1;

    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;

    return 0;
}