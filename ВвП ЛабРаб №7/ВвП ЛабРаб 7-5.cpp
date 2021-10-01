#include <iostream>

int main()
{
    double A, B;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите значения А и В через пробел для уравнения А*х+В=0" << std::endl;
    std::cin >> A >> B;

    double x = -B / A;//решение уравнения A·x + B = 0

    std::cout << "x = " << x << std::endl;

    return 0;
}