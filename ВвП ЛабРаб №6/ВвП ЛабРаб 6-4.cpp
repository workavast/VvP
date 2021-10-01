#include <iostream>

int main()
{
    double x;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите значение х" << std::endl;
    std::cin >> x;

    double y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;

    std::cout << "уравнение 3*x^(6)-6*x^(2)-7 , при заданном х равняется " << y << std::endl;

    return 0;
}