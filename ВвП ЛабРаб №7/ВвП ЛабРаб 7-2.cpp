
#include <iostream>

int main()
{
    double a;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите значение угла в радиантах" << std::endl;
    std::cin >> a;

    double ugol = a * 57.3248;

    std::cout << "Значение угла в градусах = " << ugol << std::endl;

    return 0;
}