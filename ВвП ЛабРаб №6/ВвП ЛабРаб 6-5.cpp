#include <iostream>

int main()
{
    double x;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите значение х" << std::endl;
    std::cin >> x;

    double sum = x - 3;

    double y = 4 * pow(sum, 6) - 7 * pow(sum, 3) + 2;

    std::cout << "Уравнение 4*(x-3)^(6)-7*(x-3)^(3)+2 ,при заданном значении х равняется " << y << std::endl;

    return 0;
}